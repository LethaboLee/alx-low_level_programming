#include <stdio.h>
/**
 * main - printing all possible different cominations of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, 1;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (1 = 50; 1 < 58; 1++)
			{
				if (m < 1 && n < m)
				{
					putchar(n);
					putchar(m);
					putchar(1);
					if (55 != n || 56 != m)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
