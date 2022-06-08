#include "main.h"
/**
 * print_last_digit - creats a function that prints the last didgit of numbers
 *
 * @n: variable subjected to test
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n *-1;
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
