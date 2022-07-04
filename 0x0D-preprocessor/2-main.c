#include <stdio.h>

/**
 * main - a function that prints the name of the file it was 
 * compiled from folowed by a new line.
 * @argc: variable 1.
 * @argv: the variable that contains the name of executable
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	printf("program's name is: %s\n",argv[0]);
	return 0;
}
