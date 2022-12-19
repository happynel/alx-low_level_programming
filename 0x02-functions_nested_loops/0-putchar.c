#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0 (Scuccess)
 */
int main(void)
{
	char *sh = "_putchar";

		while (*sh)
		{

			putchar(*sh);
			sh++;
		}
	putchar('\n');
	return (0);
}
