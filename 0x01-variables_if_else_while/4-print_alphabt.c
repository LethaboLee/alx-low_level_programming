#include <stdio.h>
/**
 * main - printing alphabet in lowercase,
 * followed by new line except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++
	}
	putchar('\n');
	return (0);
}
