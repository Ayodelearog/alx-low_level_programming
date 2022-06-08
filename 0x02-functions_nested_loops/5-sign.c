#include "main.h"
/**
 * print_sign - a program that prints the sign of a number.
 *
 * @n: the variable subjected to the test
 *
 * Return: 1 if n positive, 0 if n is zero, -1 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return ('/');
		_putchar('-');
	}
}
