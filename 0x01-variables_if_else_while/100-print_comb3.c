#include <stdio.h>
/**
 * main - print two pair digits
 * without repeating any digit in a pair
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int firstdigit;
	int seconddigit;

	for (firstdigit = 0; firstdigit <= 8; firstdigit++)
	{
		for (seconddigit = 1; seconddigit <= 9; seconddigit++)
		{
			if (firstdigit < seconddigit)
			{
				putchar(firstdigit + '0');
				putchar(seconddigit + '0');
				if (firstdigit != 8 || seconddigit != 9)
				{
					putchar(',');
					putchar (' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
