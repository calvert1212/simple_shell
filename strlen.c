#include "shell.h"

/**
 * _strlen - function that finds the length of a string
 * @s: string to use
 * Return: length of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * _print_env - Prints the Environment function
 * Return: void
 */

void _print_env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
