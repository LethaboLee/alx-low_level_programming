#include "main.h"
/**
 * print_diagonal - drawing a diagonal line
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putcahr('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == 1)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
