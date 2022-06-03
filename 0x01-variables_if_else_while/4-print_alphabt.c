#include <stdio.h>
/**
 * main - print all alphabets in lowercase except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'a';

	if ((i <= 'z'))
	{
		i++;
	}
	else if (i != 'q' && i != 'e')
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
