#include "headers.h"

/**
 * _print_environ - Prints environment variables
 * Return: void
 */

void _print_environ(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
