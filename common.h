#ifndef _HSS_COMMON_H_
#define _HSS_COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <stdbool.h>

#include <readline/readline.h>
#include <readline/history.h>


#ifndef NOT_USER_COLOR
// RL_PROMPT_START_IGNORE RL_PROMPT_END_IGNORE
#define ANSI_COLOR_RED     "\001\x1b[31m\002"
#define ANSI_COLOR_GREEN   "\001\x1b[32m\002"
#define ANSI_COLOR_YELLOW  "\001\x1b[33m\002"
#define ANSI_COLOR_BLUE    "\001\x1b[34m\002"
#define ANSI_COLOR_MAGENTA "\001\x1b[35m\002"
#define ANSI_COLOR_CYAN    "\001\x1b[36m\002"

#define ANSI_COLOR_BOLD         "\001\x1b[1m\002"
#define ANSI_COLOR_RED_BOLD     "\001\x1b[31;1m\002"
#define ANSI_COLOR_GREEN_BOLD   "\001\x1b[32;1m\002"
#define ANSI_COLOR_YELLOW_BOLD  "\001\x1b[33;1m\002"
#define ANSI_COLOR_BLUE_BOLD    "\001\x1b[34;1m\002"
#define ANSI_COLOR_MAGENTA_BOLD "\001\x1b[35;1m\002"
#define ANSI_COLOR_CYAN_BOLD    "\001\x1b[36;1m\002"

#define ANSI_COLOR_RESET   "\001\x1b[0m\001"
#else
#define ANSI_COLOR_RED
#define ANSI_COLOR_GREEN
#define ANSI_COLOR_YELLOW
#define ANSI_COLOR_BLUE
#define ANSI_COLOR_MAGENTA
#define ANSI_COLOR_CYAN
#define ANSI_COLOR_RESET
#endif

#define eprintf(...) fprintf(stderr, __VA_ARGS__)

#define SAVE_ERRNO int saved_errno = errno
#define RESTORE_ERRNO errno = saved_errno

extern struct slot *slots;

extern struct hss_config {
    bool verbose;
    char *user;
    int common_options_argc;
    const char **common_options_argv;
    char *output_file;
} *pconfig;

extern int stdout_isatty;

#endif //_HSS_COMMON_H_
