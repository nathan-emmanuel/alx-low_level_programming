#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for compiler; prints the whole alphabet
 * in lowercase, in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 122;

	for (; n >= 97; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
