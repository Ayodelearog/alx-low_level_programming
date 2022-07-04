#include <stdio.h>

/**
 * main - a function that prints the name of the file it was 
 * compiled from folowed by a new line.
 * Return: Always 0 (Success).
 */

int main(void)
{
	printf("program's name is: %s\n",__FILE__);
	return (0);
}
