#include "main.h"
/**
 * _abs - Computes absolute values of an integer.
 *
 * @i: input nuumber as an integer.
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
