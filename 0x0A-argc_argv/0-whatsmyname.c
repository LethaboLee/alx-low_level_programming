#include <stdio.h>
#include "main.h"
/**
 * main - prints name of the program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unsaved)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
