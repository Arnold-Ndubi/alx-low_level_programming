#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	inti x, z, len;

	X = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	len = i;

	for (z = len -1; z >= 0; z--)
	{
		_putchar(s[z]);
	}

	_putchar('\n');
}
