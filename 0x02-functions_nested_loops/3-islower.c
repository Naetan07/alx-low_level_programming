#include "main.h"
/**
 * _islower - Shows 1 if the lower case is c and 0 if otherwise
 *
 * @c: The char in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c);
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
