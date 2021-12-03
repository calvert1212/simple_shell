#include "shell.h"

/**
 * stopcc -
 * @sig:
 * Return: void
 */

void stopcc(int sig)
{
	(void) sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}

/**
 * _strindup -
 * @s1:
 * @dex:
 * Return:
 */

char *_strindup(char *s1, int dex)
{
	int i = 0;
	int l = 1;
	char *s2;

	if (s1 == NULL)
		return (NULL);
	l = _strlen(s1) - dex;
	s2 = malloc((sizeof(char) * (l + 1)));
	if (s2 == NULL)
		return (NULL);
	while (i < l)
	{
		s2[i] = s1[dex];
		i++;
		dex++;
	}
	s2[i] = '\0';
	return (s2);
}
