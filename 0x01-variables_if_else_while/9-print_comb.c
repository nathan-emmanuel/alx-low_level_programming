#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for compiler; prints numbers 0-10
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
