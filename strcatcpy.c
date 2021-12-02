#include "shell.h"

char *_strcp(char *strin)
{
  int x = 0, l = 1;
  char *strout;

  if (strin == NULL)
    return (NULL);
  l = _strlen(strin);
  strout = malloc((sizeof(char) * l) + 1);
  if (strout == NULL)
    return (NULL);
  for (; x < l; x++)
    strout[x] = strin[x];
  strout[x] = '\0';
  return (strout);
}

char *_strcpy(char *dest, char *src)
{
  int i = 0;

  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

char *_strcat(char *dest, char *src)
{
  int i = 0, x = 0;

  x = _strlen(dest);
  while (src[i] != '\0')
    {
      dest[x] = src[i];
      i++;
      x++;
    }
  dest[x] = '\0';
  return (dest);
}
