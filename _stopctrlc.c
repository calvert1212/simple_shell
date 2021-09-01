#include "stopctrlc.h"
#include "headers.h"

/**
 * _stopctrlc - Stops exit on Ctrl C
 * @signal: Signal number
 * Description: Prevents Ctrl C exit and automatically creates new prompt
 * Return: None
 */
void _stopctrlc(int signal)
{
  (void) signal;
  write(STDOUT_FILENO, "\n$ ", 3);
}
