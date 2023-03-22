#include "main.h"
/**
 * main - Entry point
 * print_alphabet - Prints alphabet in lowercase.
 * return: always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
