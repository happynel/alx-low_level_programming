#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabet both expect e and q
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}

