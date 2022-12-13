#include "main.h"
/**
 * print the sign of a number
 *
 * Return: 1 for the greater than zero or 0 for zero
 * and -1 for less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
