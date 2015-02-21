
#ifndef GETOPT_H
#define GETOPT_H

#ifndef STDIN_FILENO
#define STDIN_FILENO  0
#endif
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#ifdef  __cplusplus
extern "C" {
#endif

int getopt(int nargc, char * const nargv[], const char *ostr) ;

extern char    *optarg;
extern int optind;
#ifdef __cplusplus
}
#endif


#endif
