#include "shell.h"

/**
 * _strcp - Function that copies a string
 * @strin: string to be copied
 * Return: Copied string
 */

char *_strcp(char *strin)
{
	int x = 0, l = 1;
	char *strout;

	if (strin == NULL)
		return (NULL);
	l = _strlen(strin);
	strout = malloc((sizeof(char) * l) + 1);
	if (strout == NULL)
		return (NULL);
	for (; x < l; x++)
	strout[x] = strin[x];
	strout[x] = '\0';
	return (strout);
}

/**
 * _strcpy - Copies source string to a destination string
 * @dest: Destination string
 * @src: Source string
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - Function that concatonates source string to destination string
 * @dest: destination string
 * @src: source string
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	x = _strlen(dest);
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
