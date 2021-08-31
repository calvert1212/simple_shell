#include "headers.h"


/**
 * _exec - calles execve on command
 * @array: the string
 * Return: the exit code of command
 */

int _exec(char **array)
{
	int cpid = 0, exitcode = 0, status;

	if (!array)
		return (0);
	cpid = fork();
	if (cpid == 0)
	{
		if (execve(array[0], array, environ) == -1)
			_exit(127);
	}
	else
	{
		wait(&status);
	}
	if (WIFEXITED(status))
		exitcode = WEXITSTATUS(status);
	return (exitcode);
}
