#include "holberton.h"

/**
 * _parse - Parses a command string
 * @cmd: the input string
 * @del: the delimiter
 * Return: parsed string
 */
char **_parse(char *cmd, char *del)
{
	int count = 0, i = 0, l = 0;
	char **array, *pch;

	if (cmd[0] == '\0')
		return (NULL);
	l = _strlen(cmd);
	pch = strtok(cmd, del);
	if (pch == NULL)
		return (NULL);
	while (pch != NULL)
	{
		count++;
		pch = strtok(NULL, del);
	}
	while (i < l)
	{
		if (cmd[i] == '\0')
			cmd[i] = del[0];
		i++;
	}
	i = 0;
	array = malloc(sizeof(char *) * (count + 1));
	pch = strtok(cmd, del);
	while (pch != NULL)
	{
		array[i++] = _strdup(pch);
		pch = strtok(NULL, del);
	}
	array[i] = NULL;
	return (array);
}
