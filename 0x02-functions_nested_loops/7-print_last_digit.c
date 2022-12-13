#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @c. Print the digits
 *
 * Return: The value of the lat digit
 */
int print_last_digit(int)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
