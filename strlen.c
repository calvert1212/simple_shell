#include "shell.h"

int _strlen(char *s)
{
  int x = 0;

  while (s[x] != '\0')
    x++;
  return (x);
}

void _print_env(void)
{
  int i;

  for (i = 0; environ[i] != NULL; i++)
    {
      write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
      write(STDOUT_FILENO, "\n", 1);
    }
}
