#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string to be printed out
 *
 * Return: no return
 */

void _puts(char *str)
{
	str = "Hello";

	while (str < '\0')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
