#include "main.h"

/**
 * _abs - prints the sign of a number
 * @c: The number to be computed
 * Return: absolute value of number or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
