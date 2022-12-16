#include "main.h"

/**
* print_square - Draws square on terminal
* @size: Argument (Integer size of square)
*/
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		if (i == size)
		{
			break;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
