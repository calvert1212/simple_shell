#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

/**
 * main - main function for the shell
 * Return: 0
 */

int main(void)
{
	char **arr, *cmd = NULL;
	size_t n = 0;
	ssize_t strin = 0;
	int ecode = 0, i;

	do {
	i = 0;
	if (isatty(STDIN_FILENO))
	write(STDOUT_FILENO, "$ ", 2);
	signal(SIGINT, stopcc);
	strin = getline(&cmd, &n, stdin);
	if (strin == EOF)
	break;
	cmd[strin - 1] = '\0';
	arr = delim(cmd, " ");
	if (arr == NULL)
	continue;
	if (strcmp(arr[0], "exit") == 0)
	{
	while (arr[i])
	free(arr[i++]);
	free(arr);
	break;
	}
	if (strcmp(arr[0], "env") == 0)
	{
	penv();
	while (arr[i])
	free(arr[i++]);
	free(arr);
	continue;
	}
	pfind(arr), ecode = exec(arr);
	while (arr[i])
	free(arr[i++]);
	free(arr);
	} while (1);
	free(cmd);
	return (ecode);
}
