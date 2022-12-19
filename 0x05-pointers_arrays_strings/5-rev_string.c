#include "main.h"

/**
 * rev_string - reverses a string
 *
 * string_length: prints number of characters.
 * @s: store character
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length, q;
	char *begin, *end, temp;

	length = string_length(s);

	begin = s;
	end = s;

	for (q = 0; q < (length - 1); q++)
		end++;

	for (q = 0; q < length / 2; q++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

/**
 * string_length - finds the length of a string.
 * Return: length of q.
 *@pointer: pointer.
 */
int string_length(char *pointer)
{
	int q = 0;

	while (*(pointer + q) != '\0')
	{
		q++;
	}
	return (q);
}

