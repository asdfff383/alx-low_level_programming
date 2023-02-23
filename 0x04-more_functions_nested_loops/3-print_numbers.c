#include "main.h"

/**
 * print_numbers - print number since 0 to 9
 * Return: the numbers since 0 tp 9
 */

int print_numbers(void)

{
	int x;
	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}

