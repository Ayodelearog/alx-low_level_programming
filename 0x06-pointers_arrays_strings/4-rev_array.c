#include "main.h"

/**
 * reverse_array - a function that reverses content of an array
 * @a: the array to be reverses
 * @n: the number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp;

	for (int end = n-1; end >= n/2; end--)
	{
		tmp = a[n-1-end];
		a[n-1-end] = a[end];
		a[end] = tmp;
	}
}
