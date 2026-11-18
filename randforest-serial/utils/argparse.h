#ifndef argparse_h
#define argparse_h

#include <stdlib.h>
#include <string.h>

/* How many arguments we accept. */
#define COUNT_ARGS 1

extern const char *argp_program_version;
extern const char *argp_program_bug_address;

/* Argument keys for manual parsing */
#define ARG_KEY_ROWS "--num_rows"
#define ARG_KEY_COLS "--num_cols"
#define ARG_KEY_LOG_LEVEL "--log_level"
#define ARG_KEY_SEED "--seed"

/* Used by main to communicate with parse_opt. */
struct arguments
{
    char *args[COUNT_ARGS]; /* CSV file argument. */

    long rows, cols;
    int log_level;
    int random_seed;
};


void parse_args(int argc, char **argv, struct arguments *arguments);


#endif // argparse_h
