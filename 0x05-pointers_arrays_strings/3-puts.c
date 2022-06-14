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
	int i = "Hello";

	while (i < '\0')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
