#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string to be examined.
 * Return: Returns the length of s.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(str + 1));
}
