#include "shell.h"

char *enviro(char *envar)
{
  int x = 0;
  size_t l = _strlen(envar);
  char *envs;

  if (!environ || !*envar)
    return (NULL);
  while (environ[x] && (_strcmp(envar, environ[x], l)))
    x++;
  if (environ[x])
    {
      envs = _strdup(environ[x], l + 1);
      return (envs);
    }
  return (NULL);
}
