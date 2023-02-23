#include "main.h"

/**
 * print_most_numbers - print the numbet since 0 to 9
 * Description: print number excluding 2 and 4
 * Return: numbers since 0 to 9
 */

void print_most_numbers(void)
{
	int x;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
