/** @file RNAsnoop_cmdl.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.5
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef RNASNOOP_CMDL_H
#define RNASNOOP_CMDL_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef RNASNOOP_CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define RNASNOOP_CMDLINE_PARSER_PACKAGE "RNAsnoop"
#endif

#ifndef RNASNOOP_CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define RNASNOOP_CMDLINE_PARSER_PACKAGE_NAME "RNAsnoop"
#endif

#ifndef RNASNOOP_CMDLINE_PARSER_VERSION
/** @brief the program version */
#define RNASNOOP_CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct RNAsnoop_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int alignmentLength_arg;	/**< @brief Limit the extent of the interactions to L nucleotides (default='25').  */
  char * alignmentLength_orig;	/**< @brief Limit the extent of the interactions to L nucleotides original value given at command line.  */
  const char *alignmentLength_help; /**< @brief Limit the extent of the interactions to L nucleotides help description.  */
  int constraint_flag;	/**< @brief Calculate the stem structure subject to constraints.
 (default=off).  */
  const char *constraint_help; /**< @brief Calculate the stem structure subject to constraints.
 help description.  */
  char * query_arg;	/**< @brief File containing the query sequence.
.  */
  char * query_orig;	/**< @brief File containing the query sequence.
 original value given at command line.  */
  const char *query_help; /**< @brief File containing the query sequence.
 help description.  */
  char * target_arg;	/**< @brief File containing the target sequence.
.  */
  char * target_orig;	/**< @brief File containing the target sequence.
 original value given at command line.  */
  const char *target_help; /**< @brief File containing the target sequence.
 help description.  */
  char * suffix_arg;	/**< @brief Specificy the suffix that was added by RNAup to the accessibility files
  
 (default='_u1_to_30.out').  */
  char * suffix_orig;	/**< @brief Specificy the suffix that was added by RNAup to the accessibility files
  
 original value given at command line.  */
  const char *suffix_help; /**< @brief Specificy the suffix that was added by RNAup to the accessibility files
  
 help description.  */
  char * from_RNAplfold_arg;	/**< @brief Specify the directory where accessibility profile generated by RNAplfold are found
  
.  */
  char * from_RNAplfold_orig;	/**< @brief Specify the directory where accessibility profile generated by RNAplfold are found
  
 original value given at command line.  */
  const char *from_RNAplfold_help; /**< @brief Specify the directory where accessibility profile generated by RNAplfold are found
  
 help description.  */
  int alignment_mode_flag;	/**< @brief Specify if RNAsnoop gets alignments or single sequences as input
  
 (default=off).  */
  const char *alignment_mode_help; /**< @brief Specify if RNAsnoop gets alignments or single sequences as input
  
 help description.  */
  int fast_folding_arg;	/**< @brief Speedup of the target search (default='1').  */
  char * fast_folding_orig;	/**< @brief Speedup of the target search original value given at command line.  */
  const char *fast_folding_help; /**< @brief Speedup of the target search help description.  */
  int extension_cost_arg;	/**< @brief Cost to add to each nucleotide in a duplex (default='0').  */
  char * extension_cost_orig;	/**< @brief Cost to add to each nucleotide in a duplex original value given at command line.  */
  const char *extension_cost_help; /**< @brief Cost to add to each nucleotide in a duplex help description.  */
  int minimal_right_duplex_arg;	/**< @brief Minimal Right Duplex Energy
  
 (default='-270').  */
  char * minimal_right_duplex_orig;	/**< @brief Minimal Right Duplex Energy
  
 original value given at command line.  */
  const char *minimal_right_duplex_help; /**< @brief Minimal Right Duplex Energy
  
 help description.  */
  int minimal_loop_energy_arg;	/**< @brief Minimal Right Duplex Energy
 (default='-280').  */
  char * minimal_loop_energy_orig;	/**< @brief Minimal Right Duplex Energy
 original value given at command line.  */
  const char *minimal_loop_energy_help; /**< @brief Minimal Right Duplex Energy
 help description.  */
  int minimal_left_duplex_arg;	/**< @brief Minimal Left Duplex Energy
  
 (default='-170').  */
  char * minimal_left_duplex_orig;	/**< @brief Minimal Left Duplex Energy
  
 original value given at command line.  */
  const char *minimal_left_duplex_help; /**< @brief Minimal Left Duplex Energy
  
 help description.  */
  int minimal_duplex_arg;	/**< @brief Minimal Duplex Energy
  
 (default='-1090').  */
  char * minimal_duplex_orig;	/**< @brief Minimal Duplex Energy
  
 original value given at command line.  */
  const char *minimal_duplex_help; /**< @brief Minimal Duplex Energy
  
 help description.  */
  int duplex_distance_arg;	/**< @brief Distance between target 3' ends of two consecutive duplexes
 (default='2').  */
  char * duplex_distance_orig;	/**< @brief Distance between target 3' ends of two consecutive duplexes
 original value given at command line.  */
  const char *duplex_distance_help; /**< @brief Distance between target 3' ends of two consecutive duplexes
 help description.  */
  int minimal_stem_length_arg;	/**< @brief Minimal snoRNA stem length
  
 (default='5').  */
  char * minimal_stem_length_orig;	/**< @brief Minimal snoRNA stem length
  
 original value given at command line.  */
  const char *minimal_stem_length_help; /**< @brief Minimal snoRNA stem length
  
 help description.  */
  int maximal_stem_length_arg;	/**< @brief Maximal snoRNA stem length
  
 (default='120').  */
  char * maximal_stem_length_orig;	/**< @brief Maximal snoRNA stem length
  
 original value given at command line.  */
  const char *maximal_stem_length_help; /**< @brief Maximal snoRNA stem length
  
 help description.  */
  int minimal_duplex_box_length_arg;	/**< @brief Minimal distance between the duplex end and the H/ACA box
  
 (default='11').  */
  char * minimal_duplex_box_length_orig;	/**< @brief Minimal distance between the duplex end and the H/ACA box
  
 original value given at command line.  */
  const char *minimal_duplex_box_length_help; /**< @brief Minimal distance between the duplex end and the H/ACA box
  
 help description.  */
  int maximal_duplex_box_length_arg;	/**< @brief Maximal distance between the duplex end and the H/ACA box
  
 (default='16').  */
  char * maximal_duplex_box_length_orig;	/**< @brief Maximal distance between the duplex end and the H/ACA box
  
 original value given at command line.  */
  const char *maximal_duplex_box_length_help; /**< @brief Maximal distance between the duplex end and the H/ACA box
  
 help description.  */
  int minimal_snoRNA_stem_loop_length_arg;	/**< @brief Minimal number of nucleotides between the beginning of stem loop and
  beginning of the snoRNA sequence
  
 (default='1').  */
  char * minimal_snoRNA_stem_loop_length_orig;	/**< @brief Minimal number of nucleotides between the beginning of stem loop and
  beginning of the snoRNA sequence
  
 original value given at command line.  */
  const char *minimal_snoRNA_stem_loop_length_help; /**< @brief Minimal number of nucleotides between the beginning of stem loop and
  beginning of the snoRNA sequence
  
 help description.  */
  int maximal_snoRNA_stem_loop_length_arg;	/**< @brief Maximal number of nucleotides between the beginning of stem loop and
  beginning of the snoRNA sequence
  
 (default='100000').  */
  char * maximal_snoRNA_stem_loop_length_orig;	/**< @brief Maximal number of nucleotides between the beginning of stem loop and
  beginning of the snoRNA sequence
  
 original value given at command line.  */
  const char *maximal_snoRNA_stem_loop_length_help; /**< @brief Maximal number of nucleotides between the beginning of stem loop and
  beginning of the snoRNA sequence
  
 help description.  */
  int minimal_snoRNA_duplex_length_arg;	/**< @brief Minimal distance between duplex start and snoRNA
  
 (default='0').  */
  char * minimal_snoRNA_duplex_length_orig;	/**< @brief Minimal distance between duplex start and snoRNA
  
 original value given at command line.  */
  const char *minimal_snoRNA_duplex_length_help; /**< @brief Minimal distance between duplex start and snoRNA
  
 help description.  */
  int maximal_snoRNA_duplex_length_arg;	/**< @brief Maximal distance between duplex start and snoRNA
  
 (default='0').  */
  char * maximal_snoRNA_duplex_length_orig;	/**< @brief Maximal distance between duplex start and snoRNA
  
 original value given at command line.  */
  const char *maximal_snoRNA_duplex_length_help; /**< @brief Maximal distance between duplex start and snoRNA
  
 help description.  */
  int minimal_duplex_stem_energy_arg;	/**< @brief Minimal duplex stem energy
  
 (default='-1370').  */
  char * minimal_duplex_stem_energy_orig;	/**< @brief Minimal duplex stem energy
  
 original value given at command line.  */
  const char *minimal_duplex_stem_energy_help; /**< @brief Minimal duplex stem energy
  
 help description.  */
  int minimal_total_energy_arg;	/**< @brief Minimal total energy
  
 (default='100000').  */
  char * minimal_total_energy_orig;	/**< @brief Minimal total energy
  
 original value given at command line.  */
  const char *minimal_total_energy_help; /**< @brief Minimal total energy
  
 help description.  */
  int maximal_stem_asymmetry_arg;	/**< @brief Maximal snoRNA stem asymmetry
  
 (default='30').  */
  char * maximal_stem_asymmetry_orig;	/**< @brief Maximal snoRNA stem asymmetry
  
 original value given at command line.  */
  const char *maximal_stem_asymmetry_help; /**< @brief Maximal snoRNA stem asymmetry
  
 help description.  */
  int minimal_lower_stem_energy_arg;	/**< @brief Minimal lower stem energy
  
 (default='100000').  */
  char * minimal_lower_stem_energy_orig;	/**< @brief Minimal lower stem energy
  
 original value given at command line.  */
  const char *minimal_lower_stem_energy_help; /**< @brief Minimal lower stem energy
  
 help description.  */
  double energy_threshold_arg;	/**< @brief Maximal energy difference between the mfe and the desired suboptimal
 (default='-1').  */
  char * energy_threshold_orig;	/**< @brief Maximal energy difference between the mfe and the desired suboptimal
 original value given at command line.  */
  const char *energy_threshold_help; /**< @brief Maximal energy difference between the mfe and the desired suboptimal
 help description.  */
  int produce_ps_flag;	/**< @brief Draw annotated 2D structures for a list of dot-bracket structures
 (default=off).  */
  const char *produce_ps_help; /**< @brief Draw annotated 2D structures for a list of dot-bracket structures
 help description.  */
  char * output_directory_arg;	/**< @brief Set where the generated figures should be stored
  
 (default='./').  */
  char * output_directory_orig;	/**< @brief Set where the generated figures should be stored
  
 original value given at command line.  */
  const char *output_directory_help; /**< @brief Set where the generated figures should be stored
  
 help description.  */
  int direct_redraw_flag;	/**< @brief Outputs 2D interactions concurrently with the interaction calculation for each suboptimal interaction. The -I option should be preferred.
  
 (default=off).  */
  const char *direct_redraw_help; /**< @brief Outputs 2D interactions concurrently with the interaction calculation for each suboptimal interaction. The -I option should be preferred.
  
 help description.  */
  char * from_RNAup_arg;	/**< @brief Specify the directory where accessibility profiles generated by RNAup are found
  
.  */
  char * from_RNAup_orig;	/**< @brief Specify the directory where accessibility profiles generated by RNAup are found
  
 original value given at command line.  */
  const char *from_RNAup_help; /**< @brief Specify the directory where accessibility profiles generated by RNAup are found
  
 help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int alignmentLength_given ;	/**< @brief Whether alignmentLength was given.  */
  unsigned int constraint_given ;	/**< @brief Whether constraint was given.  */
  unsigned int query_given ;	/**< @brief Whether query was given.  */
  unsigned int target_given ;	/**< @brief Whether target was given.  */
  unsigned int suffix_given ;	/**< @brief Whether suffix was given.  */
  unsigned int from_RNAplfold_given ;	/**< @brief Whether from-RNAplfold was given.  */
  unsigned int alignment_mode_given ;	/**< @brief Whether alignment-mode was given.  */
  unsigned int fast_folding_given ;	/**< @brief Whether fast-folding was given.  */
  unsigned int extension_cost_given ;	/**< @brief Whether extension-cost was given.  */
  unsigned int minimal_right_duplex_given ;	/**< @brief Whether minimal-right-duplex was given.  */
  unsigned int minimal_loop_energy_given ;	/**< @brief Whether minimal-loop-energy was given.  */
  unsigned int minimal_left_duplex_given ;	/**< @brief Whether minimal-left-duplex was given.  */
  unsigned int minimal_duplex_given ;	/**< @brief Whether minimal-duplex was given.  */
  unsigned int duplex_distance_given ;	/**< @brief Whether duplex-distance was given.  */
  unsigned int minimal_stem_length_given ;	/**< @brief Whether minimal-stem-length was given.  */
  unsigned int maximal_stem_length_given ;	/**< @brief Whether maximal-stem-length was given.  */
  unsigned int minimal_duplex_box_length_given ;	/**< @brief Whether minimal-duplex-box-length was given.  */
  unsigned int maximal_duplex_box_length_given ;	/**< @brief Whether maximal-duplex-box-length was given.  */
  unsigned int minimal_snoRNA_stem_loop_length_given ;	/**< @brief Whether minimal-snoRNA-stem-loop-length was given.  */
  unsigned int maximal_snoRNA_stem_loop_length_given ;	/**< @brief Whether maximal-snoRNA-stem-loop-length was given.  */
  unsigned int minimal_snoRNA_duplex_length_given ;	/**< @brief Whether minimal-snoRNA-duplex-length was given.  */
  unsigned int maximal_snoRNA_duplex_length_given ;	/**< @brief Whether maximal-snoRNA-duplex-length was given.  */
  unsigned int minimal_duplex_stem_energy_given ;	/**< @brief Whether minimal-duplex-stem-energy was given.  */
  unsigned int minimal_total_energy_given ;	/**< @brief Whether minimal-total-energy was given.  */
  unsigned int maximal_stem_asymmetry_given ;	/**< @brief Whether maximal-stem-asymmetry was given.  */
  unsigned int minimal_lower_stem_energy_given ;	/**< @brief Whether minimal-lower-stem-energy was given.  */
  unsigned int energy_threshold_given ;	/**< @brief Whether energy-threshold was given.  */
  unsigned int produce_ps_given ;	/**< @brief Whether produce-ps was given.  */
  unsigned int output_directory_given ;	/**< @brief Whether output_directory was given.  */
  unsigned int direct_redraw_given ;	/**< @brief Whether direct-redraw was given.  */
  unsigned int from_RNAup_given ;	/**< @brief Whether from-RNAup was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct RNAsnoop_cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure RNAsnoop_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure RNAsnoop_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *RNAsnoop_args_info_purpose;
/** @brief the usage string of the program */
extern const char *RNAsnoop_args_info_usage;
/** @brief all the lines making the help output */
extern const char *RNAsnoop_args_info_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *RNAsnoop_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAsnoop_cmdline_parser (int argc, char **argv,
  struct RNAsnoop_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use RNAsnoop_cmdline_parser_ext() instead
 */
int RNAsnoop_cmdline_parser2 (int argc, char **argv,
  struct RNAsnoop_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAsnoop_cmdline_parser_ext (int argc, char **argv,
  struct RNAsnoop_args_info *args_info,
  struct RNAsnoop_cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAsnoop_cmdline_parser_dump(FILE *outfile,
  struct RNAsnoop_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAsnoop_cmdline_parser_file_save(const char *filename,
  struct RNAsnoop_args_info *args_info);

/**
 * Print the help
 */
void RNAsnoop_cmdline_parser_print_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void RNAsnoop_cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void RNAsnoop_cmdline_parser_print_version(void);

/**
 * Initializes all the fields a RNAsnoop_cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void RNAsnoop_cmdline_parser_params_init(struct RNAsnoop_cmdline_parser_params *params);

/**
 * Allocates dynamically a RNAsnoop_cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized RNAsnoop_cmdline_parser_params structure
 */
struct RNAsnoop_cmdline_parser_params *RNAsnoop_cmdline_parser_params_create(void);

/**
 * Initializes the passed RNAsnoop_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void RNAsnoop_cmdline_parser_init (struct RNAsnoop_args_info *args_info);
/**
 * Deallocates the string fields of the RNAsnoop_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void RNAsnoop_cmdline_parser_free (struct RNAsnoop_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int RNAsnoop_cmdline_parser_required (struct RNAsnoop_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* RNASNOOP_CMDL_H */
