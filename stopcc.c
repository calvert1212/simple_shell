#include "holberton.h"

/**
 * _stopcc - Ctrl C stops exit
 * @signal: Signal number
 * Description: Prevents Ctrl C exit
 * Return: None
 */

void _stopcc(int signal)
{
	(void) sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}
