#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - a function that concatenates two strings.
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char s1[100] = "programming", s2[] = "is awesome";
	int length = 0, i, j;

	while (s1[length] != '\0')
		++length;
	{
		for (j = 0; s2[j] != '\0'; ++j, ++length)
			s1[length] = s2[j];
	}
	s1[length] = s2[j];

	s1[length] = '\0';
	puts(s1);
	return (0);
}
