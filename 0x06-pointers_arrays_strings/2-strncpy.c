#include "main.h"

/**
 * _strncpy - copies a strings
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to copy from src
 *
 * Return: the destination string, dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;
	while ((l < n) && (*(src + l) != '\0'))
	{
		*(dest + l) = *(src + l);
		l++;
	}
	l++;
	dest[l] = '\0';
	return (dest);
}
