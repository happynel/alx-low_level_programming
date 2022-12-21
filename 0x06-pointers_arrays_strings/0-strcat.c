#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0';)
	i++;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');
	return (dest);
}
