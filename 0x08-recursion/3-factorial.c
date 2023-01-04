#include "main.h"
/**
 * factorial - Calculates the factorial of a number
 * @n: The number to calculate the factorial
 *
 * Return: the factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
