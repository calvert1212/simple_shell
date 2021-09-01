#include "headers.h"

/**
 * _strcp - creates copy of a string
 * strin: input string
 * Return: copy of string
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
 * *_strcpy - copies source string to dest string
 * @dest: destination string
 * @src: source string
 * Return: Pointer to destination string
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
 * *_strcat - concatenates a string
 * @dest: result
 * @src: source string
 * Return: Pointer to destination string
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
