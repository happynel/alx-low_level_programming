#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main  returns alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	/* new code */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
