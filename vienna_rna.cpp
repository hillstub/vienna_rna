#include <cstdlib>
#include <string.h>
#include <node.h>



#undef B0
namespace rnafold{
  extern "C"
  {
        #ifdef _OPENMP
        #include <omp.h>
        #endif
        #include "fold.h"
        #include "part_func.h"
        #include "fold_vars.h"
        #include "PS_dot.h"
        #include "utils.h"
        #include "read_epars.h"
        #include "MEA.h"
        #include "params.h"
        #include "data_structures.h"
        #include "dist_vars.h"
  }
}

char *get(v8::Local<v8::Value> value, const char *fallback = "") {
  if (value->IsString()) {
    v8::String::AsciiValue string(value);
    char *str = (char *) malloc(string.length() + 1);
    strcpy(str, *string);
    return str;
  }
  char *str = (char *) malloc(strlen(fallback) + 1);
  strcpy(str, fallback);
  return str;
}

using namespace v8;
Handle<Value> GetCentroidStruct(const Arguments& args) {
  HandleScope scope;
  using namespace rnafold;
  float           kT;
  char            *structure,*rec_sequence,*cent;
  int             length, circular;
  double          energy, fold_constrained, temperature, betaScale, dist;
  paramT          *mfe_parameters;
  pf_paramT       *pf_parameters;
  model_detailsT  md;

  rec_sequence = structure = NULL;
  pf_parameters     = NULL;
  do_backtrack      = 1;
  circular          = 0;
  length            = 0;
  fold_constrained  = 0;
  betaScale         = 1.;

  set_model_details(&md);
  md.noLP           = 1;
  
  temperature       = 37.;  /* fold at 30C instead of the default 37C */
  kT                = 1.;//(betaScale*((temperature+K0)*GASCONST))/1000.; /* in Kcal */
  pf_scale          = 1.;//exp(-(sfact*min_en)/kT/length);

  mfe_parameters    = get_scaled_parameters(temperature, md);
  pf_parameters     = get_boltzmann_factors(temperature, betaScale, md, pf_scale);
  

  using namespace v8;
  if(!args[0]->IsArray()){
    return ThrowException(Exception::TypeError(
      String::New("First argument must be an array")));
  }
  if (!args[1]->IsFunction()) {
    return ThrowException(Exception::TypeError(
      String::New("Second argument must be a callback function")));
  }
  // There's no ToFunction(), use a Cast instead.
  Local<Function> callback = Local<Function>::Cast(args[1]);
  Local<Array> array = Local<Array>::Cast(args[0]); 
  int len = array->Length(); 
  Local<Array> return_array = Array::New(len); 

  for(int i = 0; i < len; i++)
  {
    v8::Local<v8::Value> element = array->Get(i);
    char *rec_sequence = get(element);
    length  = (int)strlen(rec_sequence);
    structure = (char *)rnafold::space(sizeof(char) *(length+1));
    char *pf_struc = (char *) rnafold::space((unsigned) length+1);
    energy = rnafold::pf_fold_par(rec_sequence, pf_struc, pf_parameters, do_backtrack, fold_constrained, circular);

    FLT_OR_DBL *probs = rnafold::export_bppm();
    cent    = rnafold::get_centroid_struct_pr(length, &dist, probs);
    return_array->Set(i, String::New(cent)); 
    free(pf_struc);
    free(structure);
    free(rec_sequence);
    free(cent);
  }

  free(mfe_parameters);
  free(pf_parameters);

  // In case the operation succeeded, convention is to pass null as the
  // first argument before the result arguments.
  const unsigned argc = 2;
  Local<Value> argv[argc] = {
    Local<Value>::New(Null()),
    return_array
  };

  // Note: When calling this in an asynchronous function that just returned
  // from the threadpool, you have to wrap this in a v8::TryCatch.
  // You can also pass another handle as the "this" parameter.
  callback->Call(Context::GetCurrent()->Global(), argc, argv);

  return Undefined();
}

void RegisterModule(Handle<Object> target) {
  target->Set(String::NewSymbol("get_centroid_struct"),
    FunctionTemplate::New(GetCentroidStruct)->GetFunction());
}



NODE_MODULE(vienna_rna, RegisterModule);
