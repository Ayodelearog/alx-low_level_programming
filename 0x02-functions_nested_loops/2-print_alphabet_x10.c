#include "main.h"
/**
 * print_alphabet_x10 - prints alpphabets a-z ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char j;

	if (i <= 10)
	{
		j = 'a';

		if (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar(i);
		i++;
	}
}
