#include "main.h"

/**
 * _strlen - writing a function that returns the length of a string
 * @s: string to evaluate
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
