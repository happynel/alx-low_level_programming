#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function goes there */
/**
 * main - returns alphabets both lower and upper cases
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ch  = 'a';
	int CH  = 'A';
	/* this is the code */
	while (ch <= 'z');
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z');
	{
	
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}


