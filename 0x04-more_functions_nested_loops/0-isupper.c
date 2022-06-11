#include "main.h"

/**
 * main - checks for uppercase character.
 *
 * @c: the variable to be tested.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c = 'A';

	if (_isupper(c))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
