#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'a';

	while (i < 'z')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
