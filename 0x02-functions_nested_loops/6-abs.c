#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: The number to be checked
 *
 * Return: The absolute value of the number
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
