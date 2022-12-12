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

	for (firstdigit = 0; firstdigit <= 9; firstdigit++)
	{
		for (seconddigit = 0; seconddigit <= 9; seconddigit++)
		{
			for (thirddigit = 0; thirddigit <= 9; thirddigit++)
			{
				putchar(firstdigit + '0');
				putchar(seconddigit + '0');
				putchar(thirddigit + '0');
				if (firstdigit != 9 || seconddigit != 8 || thirddigit != 7)
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
