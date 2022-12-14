#include "main.h"
/**
 * print_to_98 - Prints all all natural numbers from n to 98
 * #n: The number to start printing from
 *
 * Return: 0 (Always Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				prinf("\n");
				brreak;
			}
			else
			{
				print("%d", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				prinf("%d", n);
				prinf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}


