#include "main.h"
#include <unistd.h>

/**
 * main - Entry point for compiler, prints _putchar,
 * followed by a new line.
 *
 * Return: The program returns 0
 */

int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
