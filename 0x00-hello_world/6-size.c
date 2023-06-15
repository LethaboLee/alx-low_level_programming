#include <stdio.h>
/**
 * main - prints sizes of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", (unsigned int)sizeof(char));
	printf("size of an int: %lu byte(s)\n", (unsigned int)sizeof(int));
	printf("size of a long int: %lu byte(s)\n", (unsigned int)sizeof(long int));
	printf("size of a long long int: %lu byte(S)\n", (unsigned int)sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", (unsigned int)sizeof(float));
	return (0);
}
