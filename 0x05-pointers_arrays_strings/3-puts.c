#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: Points to the start of the string
 *
 * Return: Void
 */

void _puts (char *str)
{
	int l;

	l = 0;
	while (*(str + l) != '\0')
	{
		_putchar(*(str + l));
		l++;
	}
	_putchar('\n');
}
