#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to look for
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
