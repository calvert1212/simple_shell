#include "holberton.h"

/**
 * _prompt - writes prompt
 * Return: void
 */

void _prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
