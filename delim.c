#include "shell.h"

/**
 * delim - function to delimate and tokenize a string
 * @cm: string to delimate
 * @del: delimating character
 * Return: tokenized delimated string
 */

char **delim(char *cm, char *del)
{
	int c = 0, i = 0, l = 0;
	char **arr, *pch;

	if (cm[0] == '\0')
		return (NULL);
	l = strlen(cm);
	pch = strtok(cm, del);
	if (pch == NULL)
		return (NULL);
	do {
		c++;
		pch = strtok(NULL, del);
	} while (pch != NULL);
	while (i < l)
	{
	if (cm[i] == '\0')
	cm[i] = del[0];
	i++;
	}
	i = 0;
	arr = malloc(sizeof(char *) * (c + 1));
	pch = strtok(cm, del);
	while (pch != NULL)
	{
		arr[i++] = strdup(pch);
		pch = strtok(NULL, del);
	}
	arr[i] = NULL;
	return (arr);
}
