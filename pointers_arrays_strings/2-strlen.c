#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(const char *s)

{
	int c = 0;

	while (; *s != '\0'; *s++)
	{
		c++;
	}
	return (c);

