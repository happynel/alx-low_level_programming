#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the charater c to stduot
 * @c: the character to print
 *
 * return: on sucess 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
