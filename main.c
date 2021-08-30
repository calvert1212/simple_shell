#include "headers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point, primary loop
 * Description: Takes both terminal and piped input as arguments, handles bins and PATH
 * Return: 0 on success
 */

int main(void)
{
  char **array, *command = NULL;
  /*^array is the arguments, command is a string generated from input*/
  size_t n = 0;
  ssize_t inputstr = 0;
  int exitcde = 0, i;

  while (1)
    /*^Primary loop of the shell, runs until condition causes exit*/
    {
      i = 0;
      if (isatty(STDIN_FILENO))
	/*^Checks if interactive mode, if so prints prompt*/
	_prompt();
      signal(SIGINT, _stopctrlc);
      /*^Prevents ctrl + c from exiting shell*/
      inputstr = getline(&command, &n, stdin);
      /*^Creates a string from the terminal input file*/
      if (inputstr == EOF)
	/*^Stops loop if non-interactive mode and edgecase*/
	break;
      command[inputstr - 1] = '\0';
      /*^Creates a nullbyte at end of command string for parsing*/
      array = _parse(command, " ");
      /*^Delimits spaces from shell input, generates argument array*/
      if (array == NULL)
	/*^Solves NULL input edgecase*/
	continue;
      if (_strcmp(array[0], "exit") == 0)
	/*^If exit is entered, exit shell*/
	{
	  while (array[i])
	    free(array[i++]);
	  free(array);
	  break;
	}
      if (_strcmp(array[0], "env") == 0)
	/*^If env is entered, print environment*/
	{
	  _print_environ();
	  while (array[i])
	    free(array[i++]);
	  free(array);
	  continue;
	}
      find_path(array), exitcde = _exec(array);
      while (array[i])
	free(array[i++]);
      free(array);
    }
  free(command);
  return (exitcde);
  /*^Frees "command" buffer and returns exit code*/
}
