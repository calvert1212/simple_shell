#ifndef SHELL_H
#define SHELL_H

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
 * struct binType - bin type thing
 * @binName: name of builtin
 * @func: bin function to call
 */

typedef struct binType
{
char *binName;
int (*func)();
} binType;

void prompt(void);
void stopcc(int sig);
char **delim(char *cm, char *del);
void penv(void);
int _strlen(char *s);
char *_strcp(char *strin);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *enviro(char *envar);
int _strcmp(char *s1, char *s2);
char *_strdup(char *s1);
char *_strindup(char *s1, int dex);
void pfind(char **array);
int exec(char **array);
char *genv(char *envar);
int _strincmp(char *s1, char *s2, int x);
void penv(void);

#endif
