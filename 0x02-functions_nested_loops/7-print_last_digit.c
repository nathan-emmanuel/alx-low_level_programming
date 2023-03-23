#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: Number in question
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l *= -1;
	return (l);
}
