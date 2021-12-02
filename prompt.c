#include <stdio.h>
#include "shell.h"

/**
 * print_prompt1 - writes prompt
 * Return: void
 */

void prompt(void)
{
  write(STDOUT_FILENO, "$ ", 2);
}
