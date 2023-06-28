#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	for (; *str != '0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
