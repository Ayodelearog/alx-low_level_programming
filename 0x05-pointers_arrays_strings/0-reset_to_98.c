#include "main.h"

/**
 * main - takes a pointer to an int as a parameter and updates the value to 98
 *
 * @*n: pointer to n
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int *n;

	n = 402;
	n = &n;
	reset_to_98(n);
	return (0);
}
