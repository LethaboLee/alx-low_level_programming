#include "main.h"
/**
 * rev_string - a function that reverses a  string
 * @s: stribg to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, a, a1;

	a = 0;
	a1 = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	a1 = a - 1;

	for (i = 0; i < a / 2; i++)
	{
		tmp = s[i];
		s[i] = s[a1];
		s[a1--] = tmp;
	}
}
