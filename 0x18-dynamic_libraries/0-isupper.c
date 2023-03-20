#include "main.h"

/**
* _isupper - check for uppercase character.
*
* @c: character
* Return: 1 if c is uppercase and 0 otherwise.
*/

int _isupper(int c)

{
	int i;

	if (c >= 65 && c <= 90)
		i = 1;
	else
		i = 0;
	return (i);
}
