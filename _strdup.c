#include "headers.h"

/**
 * _strdup - makes a duplicate of a string with malloc
 * @s1: input string
 * Return: result string, s2
 */
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
