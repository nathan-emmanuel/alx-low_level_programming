#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for compiler; prints the hexadecimal number system
 *
 * Return: Always 0
 */

int main(void)
{
	char c, a;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
