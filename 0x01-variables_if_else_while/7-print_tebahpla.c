#include <stdio.h>
/**
 * main - print the alphabets in reverse order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

