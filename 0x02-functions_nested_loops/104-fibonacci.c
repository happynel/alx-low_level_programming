#include <stdio.h>
#include <stdlib.h>
/**
 * main - Finds and prints the first 98 Fibonacci numbers
 * Return: 0 Always
 *
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %1ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
