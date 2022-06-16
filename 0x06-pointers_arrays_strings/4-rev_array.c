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
	int end;

	for (int start = 0; start < n/2; start++)
	{
		tmp = a[start];
		a[start] = a[end = n-start-1];
		a[end] = tmp;
	}
}
