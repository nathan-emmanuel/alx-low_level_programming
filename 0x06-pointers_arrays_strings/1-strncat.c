#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to append from src
 *
 * Return: the destination string, dest
 */

char *_strcat(char *dest, char *src, int n)
{
	int l, a;

	l = 0;
	a = 0;
	while (*(dest + l) != '\0')
		l++;
	l++;
	while (a <= n)
	{
		*(dest + l) = *(src + a);
		l++;
		a++;
	}
	return (dest);
}
