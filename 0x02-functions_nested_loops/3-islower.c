#include "main,h"

/**
 * _islower - checks for a lowercase
 * @c: The ASCII (int) value of the character
 *
 * Return: 1(true), 0(false)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
