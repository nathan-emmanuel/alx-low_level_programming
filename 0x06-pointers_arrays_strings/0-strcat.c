#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: the destination string, dest
 */

char *_strcat(char *dest, char *src)
{
	int l, a;

	l = 0;
	a = 0;
	while (*(dest + l) != '\0')
		l++;
	l++;
	while (*(src + a) != '\0')
	{
		*(dest + l) = *(src + a);
		l++;
		a++;
	}
	return (dest);
}
