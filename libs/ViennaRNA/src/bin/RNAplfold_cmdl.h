/** @file RNAplfold_cmdl.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.23
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt */

#ifndef RNAPLFOLD_CMDL_H
#define RNAPLFOLD_CMDL_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef RNAPLFOLD_CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define RNAPLFOLD_CMDLINE_PARSER_PACKAGE "RNAplfold"
#endif

#ifndef RNAPLFOLD_CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define RNAPLFOLD_CMDLINE_PARSER_PACKAGE_NAME "RNAplfold"
#endif

#ifndef RNAPLFOLD_CMDLINE_PARSER_VERSION
/** @brief the program version */
#define RNAPLFOLD_CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct RNAplfold_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int verbose_flag;	/**< @brief Be verbose.
  
 (default=off).  */
  const char *verbose_help; /**< @brief Be verbose.
  
 help description.  */
  float cutoff_arg;	/**< @brief Report only base pairs with an average probability larger than 'cutoff' in the dot plot.
  
 (default='0.01').  */
  char * cutoff_orig;	/**< @brief Report only base pairs with an average probability larger than 'cutoff' in the dot plot.
  
 original value given at command line.  */
  const char *cutoff_help; /**< @brief Report only base pairs with an average probability larger than 'cutoff' in the dot plot.
  
 help description.  */
  int print_onthefly_flag;	/**< @brief Save memory by printing out everything during computation.
 (default=off).  */
  const char *print_onthefly_help; /**< @brief Save memory by printing out everything during computation.
 help description.  */
  int opening_energies_flag;	/**< @brief Switch output from probabilities to their logarithms.
 (default=off).  */
  const char *opening_energies_help; /**< @brief Switch output from probabilities to their logarithms.
 help description.  */
  int plex_output_flag;	/**< @brief Create additional output files for RNAplex.
  
 (default=off).  */
  const char *plex_output_help; /**< @brief Create additional output files for RNAplex.
  
 help description.  */
  int binaries_flag;	/**< @brief Output accessibility profiles in binary format.
 (default=off).  */
  const char *binaries_help; /**< @brief Output accessibility profiles in binary format.
 help description.  */
  int noconv_flag;	/**< @brief Do not automatically substitute nucleotide \"T\" with \"U\".
  
 (default=off).  */
  const char *noconv_help; /**< @brief Do not automatically substitute nucleotide \"T\" with \"U\".
  
 help description.  */
  int auto_id_flag;	/**< @brief Automatically generate an ID for each sequence.
 (default=off).  */
  const char *auto_id_help; /**< @brief Automatically generate an ID for each sequence.
 help description.  */
  char * id_prefix_arg;	/**< @brief Prefix for automatically generated IDs (as used in output file names).
 (default='sequence').  */
  char * id_prefix_orig;	/**< @brief Prefix for automatically generated IDs (as used in output file names).
 original value given at command line.  */
  const char *id_prefix_help; /**< @brief Prefix for automatically generated IDs (as used in output file names).
 help description.  */
  char * id_delim_arg;	/**< @brief Change the delimiter between prefix and increasing number for automatically generated IDs (as used in output file names).
 (default='_').  */
  char * id_delim_orig;	/**< @brief Change the delimiter between prefix and increasing number for automatically generated IDs (as used in output file names).
 original value given at command line.  */
  const char *id_delim_help; /**< @brief Change the delimiter between prefix and increasing number for automatically generated IDs (as used in output file names).
 help description.  */
  int id_digits_arg;	/**< @brief Specify the number of digits of the counter in automatically generated alignment IDs.
 (default='4').  */
  char * id_digits_orig;	/**< @brief Specify the number of digits of the counter in automatically generated alignment IDs.
 original value given at command line.  */
  const char *id_digits_help; /**< @brief Specify the number of digits of the counter in automatically generated alignment IDs.
 help description.  */
  long id_start_arg;	/**< @brief Specify the first number in automatically generated IDs.
 (default='1').  */
  char * id_start_orig;	/**< @brief Specify the first number in automatically generated IDs.
 original value given at command line.  */
  const char *id_start_help; /**< @brief Specify the first number in automatically generated IDs.
 help description.  */
  char * filename_delim_arg;	/**< @brief Change the delimiting character used in sanitized filenames.
 (default='ID-delimiter').  */
  char * filename_delim_orig;	/**< @brief Change the delimiting character used in sanitized filenames.
 original value given at command line.  */
  const char *filename_delim_help; /**< @brief Change the delimiting character used in sanitized filenames.
 help description.  */
  int filename_full_flag;	/**< @brief Use full FASTA header to create filenames.
 (default=off).  */
  const char *filename_full_help; /**< @brief Use full FASTA header to create filenames.
 help description.  */
  int winsize_arg;	/**< @brief Average the pair probabilities over windows of given size.
  
 (default='70').  */
  char * winsize_orig;	/**< @brief Average the pair probabilities over windows of given size.
  
 original value given at command line.  */
  const char *winsize_help; /**< @brief Average the pair probabilities over windows of given size.
  
 help description.  */
  int span_arg;	/**< @brief Set the maximum allowed separation of a base pair to span.
.  */
  char * span_orig;	/**< @brief Set the maximum allowed separation of a base pair to span.
 original value given at command line.  */
  const char *span_help; /**< @brief Set the maximum allowed separation of a base pair to span.
 help description.  */
  int ulength_arg;	/**< @brief Compute the mean probability that regions of length 1 to a given length are unpaired.
 (default='31').  */
  char * ulength_orig;	/**< @brief Compute the mean probability that regions of length 1 to a given length are unpaired.
 original value given at command line.  */
  const char *ulength_help; /**< @brief Compute the mean probability that regions of length 1 to a given length are unpaired.
 help description.  */
  double betaScale_arg;	/**< @brief Set the scaling of the Boltzmann factors.
 (default='1.').  */
  char * betaScale_orig;	/**< @brief Set the scaling of the Boltzmann factors.
 original value given at command line.  */
  const char *betaScale_help; /**< @brief Set the scaling of the Boltzmann factors.
 help description.  */
  double pfScale_arg;	/**< @brief In the calculation of the pf use scale*mfe as an estimate for the ensemble free energy (used to avoid overflows).
 (default='1.07').  */
  char * pfScale_orig;	/**< @brief In the calculation of the pf use scale*mfe as an estimate for the ensemble free energy (used to avoid overflows).
 original value given at command line.  */
  const char *pfScale_help; /**< @brief In the calculation of the pf use scale*mfe as an estimate for the ensemble free energy (used to avoid overflows).
 help description.  */
  char * shape_arg;	/**< @brief Use SHAPE reactivity data to guide structure predictions.
  
.  */
  char * shape_orig;	/**< @brief Use SHAPE reactivity data to guide structure predictions.
  
 original value given at command line.  */
  const char *shape_help; /**< @brief Use SHAPE reactivity data to guide structure predictions.
  
 help description.  */
  char * shapeMethod_arg;	/**< @brief Select SHAPE reactivity data incorporation strategy.
  
 (default='D').  */
  char * shapeMethod_orig;	/**< @brief Select SHAPE reactivity data incorporation strategy.
  
 original value given at command line.  */
  const char *shapeMethod_help; /**< @brief Select SHAPE reactivity data incorporation strategy.
  
 help description.  */
  char * shapeConversion_arg;	/**< @brief Select method for SHAPE reactivity conversion.
  
 (default='O').  */
  char * shapeConversion_orig;	/**< @brief Select method for SHAPE reactivity conversion.
  
 original value given at command line.  */
  const char *shapeConversion_help; /**< @brief Select method for SHAPE reactivity conversion.
  
 help description.  */
  char * commands_arg;	/**< @brief Read additional commands from file
.  */
  char * commands_orig;	/**< @brief Read additional commands from file
 original value given at command line.  */
  const char *commands_help; /**< @brief Read additional commands from file
 help description.  */
  double temp_arg;	/**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 (default='37.0').  */
  char * temp_orig;	/**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 original value given at command line.  */
  const char *temp_help; /**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 help description.  */
  char * paramFile_arg;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
.  */
  char * paramFile_orig;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 original value given at command line.  */
  const char *paramFile_help; /**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 help description.  */
  int noTetra_flag;	/**< @brief Do not include special tabulated stabilizing energies for tri-, tetra- and hexaloop hairpins.
 (default=off).  */
  const char *noTetra_help; /**< @brief Do not include special tabulated stabilizing energies for tri-, tetra- and hexaloop hairpins.
 help description.  */
  double salt_arg;	/**< @brief Set salt concentration in molar (M). Default is 1.021M.
  
.  */
  char * salt_orig;	/**< @brief Set salt concentration in molar (M). Default is 1.021M.
  
 original value given at command line.  */
  const char *salt_help; /**< @brief Set salt concentration in molar (M). Default is 1.021M.
  
 help description.  */
  char * modifications_arg;	/**< @brief Allow for modified bases within the RNA sequence string.
 (default='7I6P9D').  */
  char * modifications_orig;	/**< @brief Allow for modified bases within the RNA sequence string.
 original value given at command line.  */
  const char *modifications_help; /**< @brief Allow for modified bases within the RNA sequence string.
 help description.  */
  char ** mod_file_arg;	/**< @brief Use additional modified base data from JSON file.
  
.  */
  char ** mod_file_orig;	/**< @brief Use additional modified base data from JSON file.
  
 original value given at command line.  */
  unsigned int mod_file_min; /**< @brief Use additional modified base data from JSON file.
  
's minimum occurreces */
  unsigned int mod_file_max; /**< @brief Use additional modified base data from JSON file.
  
's maximum occurreces */
  const char *mod_file_help; /**< @brief Use additional modified base data from JSON file.
  
 help description.  */
  int dangles_arg;	/**< @brief Specify \"dangling end\" model for bases adjacent to helices in free ends and multi-loops.
 (default='2').  */
  char * dangles_orig;	/**< @brief Specify \"dangling end\" model for bases adjacent to helices in free ends and multi-loops.
 original value given at command line.  */
  const char *dangles_help; /**< @brief Specify \"dangling end\" model for bases adjacent to helices in free ends and multi-loops.
 help description.  */
  int noLP_flag;	/**< @brief Produce structures without lonely pairs (helices of length 1).
 (default=off).  */
  const char *noLP_help; /**< @brief Produce structures without lonely pairs (helices of length 1).
 help description.  */
  int noGU_flag;	/**< @brief Do not allow GU pairs.
  
 (default=off).  */
  const char *noGU_help; /**< @brief Do not allow GU pairs.
  
 help description.  */
  int noClosingGU_flag;	/**< @brief Do not allow GU pairs at the end of helices.
  
 (default=off).  */
  const char *noClosingGU_help; /**< @brief Do not allow GU pairs at the end of helices.
  
 help description.  */
  char * nsp_arg;	/**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
.  */
  char * nsp_orig;	/**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
 original value given at command line.  */
  const char *nsp_help; /**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
 help description.  */
  int energyModel_arg;	/**< @brief Set energy model.
.  */
  char * energyModel_orig;	/**< @brief Set energy model.
 original value given at command line.  */
  const char *energyModel_help; /**< @brief Set energy model.
 help description.  */
  float helical_rise_arg;	/**< @brief Set the helical rise of the helix in units of Angstrom.
 (default='2.8').  */
  char * helical_rise_orig;	/**< @brief Set the helical rise of the helix in units of Angstrom.
 original value given at command line.  */
  const char *helical_rise_help; /**< @brief Set the helical rise of the helix in units of Angstrom.
 help description.  */
  float backbone_length_arg;	/**< @brief Set the average backbone length for looped regions in units of Angstrom.
 (default='6.0').  */
  char * backbone_length_orig;	/**< @brief Set the average backbone length for looped regions in units of Angstrom.
 original value given at command line.  */
  const char *backbone_length_help; /**< @brief Set the average backbone length for looped regions in units of Angstrom.
 help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int verbose_given ;	/**< @brief Whether verbose was given.  */
  unsigned int cutoff_given ;	/**< @brief Whether cutoff was given.  */
  unsigned int print_onthefly_given ;	/**< @brief Whether print_onthefly was given.  */
  unsigned int opening_energies_given ;	/**< @brief Whether opening_energies was given.  */
  unsigned int plex_output_given ;	/**< @brief Whether plex_output was given.  */
  unsigned int binaries_given ;	/**< @brief Whether binaries was given.  */
  unsigned int noconv_given ;	/**< @brief Whether noconv was given.  */
  unsigned int auto_id_given ;	/**< @brief Whether auto-id was given.  */
  unsigned int id_prefix_given ;	/**< @brief Whether id-prefix was given.  */
  unsigned int id_delim_given ;	/**< @brief Whether id-delim was given.  */
  unsigned int id_digits_given ;	/**< @brief Whether id-digits was given.  */
  unsigned int id_start_given ;	/**< @brief Whether id-start was given.  */
  unsigned int filename_delim_given ;	/**< @brief Whether filename-delim was given.  */
  unsigned int filename_full_given ;	/**< @brief Whether filename-full was given.  */
  unsigned int winsize_given ;	/**< @brief Whether winsize was given.  */
  unsigned int span_given ;	/**< @brief Whether span was given.  */
  unsigned int ulength_given ;	/**< @brief Whether ulength was given.  */
  unsigned int betaScale_given ;	/**< @brief Whether betaScale was given.  */
  unsigned int pfScale_given ;	/**< @brief Whether pfScale was given.  */
  unsigned int shape_given ;	/**< @brief Whether shape was given.  */
  unsigned int shapeMethod_given ;	/**< @brief Whether shapeMethod was given.  */
  unsigned int shapeConversion_given ;	/**< @brief Whether shapeConversion was given.  */
  unsigned int commands_given ;	/**< @brief Whether commands was given.  */
  unsigned int temp_given ;	/**< @brief Whether temp was given.  */
  unsigned int paramFile_given ;	/**< @brief Whether paramFile was given.  */
  unsigned int noTetra_given ;	/**< @brief Whether noTetra was given.  */
  unsigned int salt_given ;	/**< @brief Whether salt was given.  */
  unsigned int modifications_given ;	/**< @brief Whether modifications was given.  */
  unsigned int mod_file_given ;	/**< @brief Whether mod-file was given.  */
  unsigned int dangles_given ;	/**< @brief Whether dangles was given.  */
  unsigned int noLP_given ;	/**< @brief Whether noLP was given.  */
  unsigned int noGU_given ;	/**< @brief Whether noGU was given.  */
  unsigned int noClosingGU_given ;	/**< @brief Whether noClosingGU was given.  */
  unsigned int nsp_given ;	/**< @brief Whether nsp was given.  */
  unsigned int energyModel_given ;	/**< @brief Whether energyModel was given.  */
  unsigned int helical_rise_given ;	/**< @brief Whether helical-rise was given.  */
  unsigned int backbone_length_given ;	/**< @brief Whether backbone-length was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct RNAplfold_cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure RNAplfold_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure RNAplfold_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *RNAplfold_args_info_purpose;
/** @brief the usage string of the program */
extern const char *RNAplfold_args_info_usage;
/** @brief the description string of the program */
extern const char *RNAplfold_args_info_description;
/** @brief all the lines making the help output */
extern const char *RNAplfold_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *RNAplfold_args_info_full_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *RNAplfold_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAplfold_cmdline_parser (int argc, char **argv,
  struct RNAplfold_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use RNAplfold_cmdline_parser_ext() instead
 */
int RNAplfold_cmdline_parser2 (int argc, char **argv,
  struct RNAplfold_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAplfold_cmdline_parser_ext (int argc, char **argv,
  struct RNAplfold_args_info *args_info,
  struct RNAplfold_cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAplfold_cmdline_parser_dump(FILE *outfile,
  struct RNAplfold_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAplfold_cmdline_parser_file_save(const char *filename,
  struct RNAplfold_args_info *args_info);

/**
 * Print the help
 */
void RNAplfold_cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void RNAplfold_cmdline_parser_print_full_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void RNAplfold_cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void RNAplfold_cmdline_parser_print_version(void);

/**
 * Initializes all the fields a RNAplfold_cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void RNAplfold_cmdline_parser_params_init(struct RNAplfold_cmdline_parser_params *params);

/**
 * Allocates dynamically a RNAplfold_cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized RNAplfold_cmdline_parser_params structure
 */
struct RNAplfold_cmdline_parser_params *RNAplfold_cmdline_parser_params_create(void);

/**
 * Initializes the passed RNAplfold_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void RNAplfold_cmdline_parser_init (struct RNAplfold_args_info *args_info);
/**
 * Deallocates the string fields of the RNAplfold_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void RNAplfold_cmdline_parser_free (struct RNAplfold_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int RNAplfold_cmdline_parser_required (struct RNAplfold_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* RNAPLFOLD_CMDL_H */
