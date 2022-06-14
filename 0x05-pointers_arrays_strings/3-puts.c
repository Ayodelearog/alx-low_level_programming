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
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
