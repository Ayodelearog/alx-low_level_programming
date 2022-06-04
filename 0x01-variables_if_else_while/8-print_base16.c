#include <stdio.h>
/**
 * main - prints all the numbers in base 16 in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	for (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a'
	for (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n';
	return (0);
}
