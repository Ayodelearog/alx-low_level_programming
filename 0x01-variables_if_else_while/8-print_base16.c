#include <stdio.h>
/**
 * main - prints all the numbers in base 16 in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = 'a';

	for (i <= '9')
	{
		putchar(i);
		i++;
	}
	for (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n';
	return (0);
}
