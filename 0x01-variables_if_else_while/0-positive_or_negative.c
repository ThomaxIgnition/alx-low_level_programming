#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main functon to generate a random num
 *
 * Return: Aiways 0 (success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rad() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
