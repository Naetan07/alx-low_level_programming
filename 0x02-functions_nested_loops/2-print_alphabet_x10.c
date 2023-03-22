#include "main.h"
/**
 * print_alphabet_x10 - Print alphabets 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int d;

	for (d = 1; i <= 10; i++)
	{
		for (d = 97; d <= 122; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
