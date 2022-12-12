#include <stdio.h>
/**
 * main - print three pair digits
 * without repeating any digit in a pair
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int firstdigit;
	int seconddigit;
	int thirddigit;

	for (firstdigit = 0; firstdigit <= 7; firstdigit++)
	{
		for (seconddigit = 1; seconddigit <= 8; seconddigit++)
		{
			for (thirddigit = 2; thirddigit <= 9; thirddigit++)
			{
				putchar(firstdigit + '0');
				putchar(seconddigit + '0');
				putchar(thirddigit + '0');
				if (firstdigit != 7 || seconddigit != 8 || thirddigit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
