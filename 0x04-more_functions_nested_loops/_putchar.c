#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charcter c to stdout
 * @c: the charcter to print
 *
 * Return: On success 1
 * On error, -1 is returned, and rmno is set appropnately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
