#include "main.h"

/**
 * _strlen - returns the lenth of a string
 *
 * @s: A string to be tested
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(len);
	}
	return (0);
}
