#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a - first integer to be swapped
 * @b - second integer to be swapped
 * @temp - temporary variable to be used in swapping a for b
 * 
 * */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}
