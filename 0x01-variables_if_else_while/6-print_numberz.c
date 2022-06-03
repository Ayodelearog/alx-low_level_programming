#include <stdio.h>
/**
 * main - prints all single diigit numbers of base 10 starting from 0 without using char or printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (0 <= 9)
	{
		i++;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
