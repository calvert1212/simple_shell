#include "headers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point, primary loop
 * Description: Takes terminal and piped input as arguments
 * Return: 0 on success
 */

int main(void)
{
	char **array, *command = NULL;
	size_t n = 0;
	ssize_t inputstr = 0;
	int exitcde = 0, i;

	while (1)
	{
	i = 0;
	if (isatty(STDIN_FILENO))
	prompt();
	signal(SIGINT, _stopctrlc);
	inputstr = getline(&command, &n, stdin);
	if (inputstr == EOF)
		break;
	command[inputstr - 1] = '\0';
	array = _parse(command, " ");
	if (array == NULL)
		continue;
	if (_strcmp(array[0], "exit") == 0)
	{
		while (array[i])
		free(array[i++]);
		free(array);
		break;
	}
	if (_strcmp(array[0], "env") == 0)
	{
		_print_environ()
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
