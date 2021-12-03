#include <stdio.h>
#include "shell.h"

/**
 * prompt - writes prompt
 * Return: void
 */

void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
