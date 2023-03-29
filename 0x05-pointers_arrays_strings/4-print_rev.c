#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: Points to the start of the string
 *
 * Return: Void
 */

void print_rev (char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
	{
		l++;
	}

	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
