#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - checks is n is positive, negative or equals to zero
* 
* Return: zero
*/

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		intf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
