#include "main.h"

/**
 * _isalpha - Check for alphabetric charcter
 * gc: The chsrcter to be reached
 * Return: 1 for alphabetric character or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
