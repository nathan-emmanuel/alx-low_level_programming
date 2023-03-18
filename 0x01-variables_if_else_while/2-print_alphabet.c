#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for compiler; prints the whole alphabet
 * in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 97;

	for (; n <= 122; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
