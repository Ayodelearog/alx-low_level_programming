#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string variable to be reversed
 *
 * Return: no return
 */

void rev_string(char *s)
{
	char c;

	c = *(s + begin);
	*(s + begin) = *(s + end);
	*(s + end) = c;
	reverse(s, ++begin, --end);
}
