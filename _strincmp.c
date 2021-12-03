#include "shell.h"

/**
 * _strincmp - compares two strings
 * @s1: first string
 * @s2: second string
 * @x: A number
 * Return: Difference in ascii values
 */

int _strincmp(char *s1, char *s2, int x)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < x - 1)
	i++;
	return (s1[i] - s2[i]);
}
