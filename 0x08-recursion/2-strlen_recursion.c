#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: lenghts to return
 *
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
