#include "holberton.h"

/**
 * _stopcc - Stops exit on Ctrl C
 * @sig: Signal number
 * Description: Prevents Ctrl C exit
 * Return: None
 */
void _stopcc(int sig)
{
  (void) sig;
  write(STDOUT_FILENO, "\n$ ", 3);
}
