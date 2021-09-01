#include "headers.h"
/**
 * _free - Frees string buffers
 * @str: Target string
 * Description: Frees strings
 * Return: None
 */
void _free(char **str)
{
	int x = 0;

	while (str[x])
		free(str[x++]);
	free(str);
}
/**
 * _strlen - Returns input string length
 * @s: Input string
 * Description: Returns input string length
 * Return: Int length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}
