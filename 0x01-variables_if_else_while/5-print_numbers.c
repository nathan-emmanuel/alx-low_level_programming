#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for compiler; prints numbers 0-10
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
