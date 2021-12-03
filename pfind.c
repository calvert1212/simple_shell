#include "shell.h"

/**
 * pfind - Handles the PATH
 * @array: input string
 */

void pfind(char **array)
{
	struct stat st;
	char *string, **path;
	int i = 0;

	if (!array)
		return;
	if (stat(array[0], &st) == 0)
		return;
	string = enviro("PATH=");
	path = delim(string, ":");
	free(string);
	string = NULL;
	while (path[i])
	{
		string = malloc(_strlen(path[i]) + _strlen(array[0]) + 2);
		string = _strcpy(string, path[i]);
		string = _strcat(string, "/");
		string = _strcat(string, array[0]);
	if (stat(string, &st) == 0)
	{
		free(array[0]);
		array[0] = _strdup(string);
	for (i = 0; path[i] != NULL; i++)
	free(path[i]);
	free(path);
	free(string);
	return;
	}
	i++;
	free(string);
	string = NULL;
	}
	for (i = 0; path[i] != NULL; i++)
		free(path[i]);
	free(path);
}
