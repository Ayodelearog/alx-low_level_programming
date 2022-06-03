#include <stdio.h>
/**
 * main - Prints alphabets in lower case and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
