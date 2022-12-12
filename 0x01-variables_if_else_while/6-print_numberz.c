#include <stdio.h>
/**
 * main - print digits from 0 to 9
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
