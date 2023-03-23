#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Return: 0(Always)
 */

void print_alphabet_x10(void)
{
	int i, n;

	for (n = 0; n <= 10; n++)
	{
		for (i = 97; i < 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
