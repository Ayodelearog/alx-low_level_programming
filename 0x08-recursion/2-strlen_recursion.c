#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string to be examined.
 * Return: Returns the length of s.
 */

int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(++s);
	}
		return (i);
}
