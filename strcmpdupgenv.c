#include "shell.h"

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (!s1 || !s2)
	   return (1);
	   while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	   	 i++;
		 return (s1[i] - s2[i]);
}

char *_strdup(char *s1)
{
  int i = 0;
  int l = 1;
  char *s2;

  if (s1 == NULL)
    return (NULL);
  l = _strlen(s1);
  s2 = malloc((sizeof(char) * l) + 1);
  if (s2 == NULL)
    return (NULL);
  while (i < l)
    {
      s2[i] = s1[i];
      i++;
    }
  s2[i] = '\0';
  return (s2);
}

char *genv(char *envar)
{
  int x = 0;
  size_t l = _strlen(envar);
  char *envs;

  if (!environ || !*envar)
    return (NULL);
  while (environ[x] && (_strincmp(envar, environ[x], l)))
    x++;
  if (environ[x])
    {
      envs = _strindup(environ[x], l + 1);
      return (envs);
    }
  return (NULL);
}
