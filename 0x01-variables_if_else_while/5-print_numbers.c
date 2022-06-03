#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 strating from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
