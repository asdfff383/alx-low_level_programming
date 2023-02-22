#include <stdio.h>

/**
 * main - print the sun of even fibonacci numbers
 * less than 4000000.
 * Return: nothing.
 */

int main(void)
{
	int i = 0;
	long  j = 1, k = 2, sun = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sun += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sun);
	return (0);
}
