#include "shell.h"

/**
 * exec - forks child process function
 * @array: command from user
 * Return: exit code of the command
 */

int exec(char **array)
{
	int cpid = 0, ecode = 0, status;

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
		ecode = WEXITSTATUS(status);
	return (ecode);
}
