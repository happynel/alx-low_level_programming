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
	char lowercase = 'a';

		char uppercase = 'A';

		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			putchar(lowercase);
		}
		for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		{
			putchar(uppercase);
		}
		putchar('\n');
		return (0);
}


