#include <stdio.h>
/**
 * main - print all digit of
 * the redix 16 number system
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char letter;

	int number;

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		while (number <= 9)
		{
			putchar(number + '0');
			number++;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

