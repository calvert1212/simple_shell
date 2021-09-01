#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <dirent.h>
#include <stdarg.h>
#include <errno.h>

extern char **environ;

/**
 *  * struct binType - builtin structure
 *   * @binName: name of builtin
 *    * @func: bin function to call
 *     */

typedef struct binType
{
	  char *binName;
	    int (*func)();
} binType;

char **_parse(char *cmd, char *del);
void _prompt(void);
void _print_environ(void);
int _exec(char **array);
int _strlen(char *s);
void _stopctrlc(int sig);
char *_strcp(char *strin);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_get_environ(char *envar);
void find_path(char **array);
char *_strcat_w_slash(char *a, char *b);
char *_strdup(char *s1);
char *_strcat(char *dest, char *src);
char *_strindup(char *s1, int dex);

#endif
