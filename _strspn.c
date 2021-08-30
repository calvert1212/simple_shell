#include "headers.h"
/**
 * _strspn - find index of s1[i] that matches s2[]
 * @s1: first string
 * @s2: second string
 * Return: size_t of the integer
 */
size_t _strspn(char *s1, const char *s2)
{
  char *sc1;
  const char *sc2;

  for (sc1 = s1; *sc1 != '\0'; ++sc1)
    {
      for (sc2 = s2; ; ++sc1)
	{
	  if (*sc2 == '\0')
	    return (sc1 - s1);
	  else if (*s1 == *s2)
	    break;
	}
    }
  return (sc1 - s1);
}
