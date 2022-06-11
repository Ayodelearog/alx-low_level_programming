#include "main.h"

/**
 * main - checks for uppercase character.
 *
 * @c: the variable to be tested.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar ('\n');
	return (0);
}
