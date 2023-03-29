#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string
 *
 * Return: The value of the length of string
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;

	return (l);
