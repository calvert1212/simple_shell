#include "headers.h"

/**
 * _execve - calls execve on command
 * @array: the arg array
 * Return: the exit code of command
 */

int _execve(char **array)
{
	int cpid = 0, exitcode = 0, status;

	if (!array)
	/*^catches no-input edgecase*/
		return (0);
	cpid = fork();
	/*^forks child process for command*/
	if (cpid == 0)
	/*^if cpid is 0 or returns -1, return "command not found" 127*/
	{
		if (execve(array[0], array, environ) == -1)
			_exit(127);
	}
	else
		/*^if valid command, child process waits and returns cpid*/
	{
		wait(&status);
	}
	if (WIFEXITED(status))
		/*^if process exited, set exitcode to exit status*/
		exitcode = WEXITSTATUS(status);
	return (exitcode);
}
