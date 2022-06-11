#include "main.h"

/**
 * main - checks for uppercase character.
 *
 * @c: the variable to be tested.
 *
 * Return: 1 if it is an uppercasse character or 0 otherwise.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
