#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;

	int aux = 0;

	char Itemp;

	while (*(s + i) != '\0')
		i += 1;
	i += 1;
	while (aux < i)
	{
		Itemp = s[i];
		s[i] = s[aux];
		s[aux] = Itemp;
		aux++;
		i--;
	}
}
