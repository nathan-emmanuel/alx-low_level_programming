#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to be reversed
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int l, n;
	char p;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (n = 0; n < (l / 2); n++)
	{
		s[n] = p;
		s[n] = s[l-n];
		s[l-n] = p;
	}
}
