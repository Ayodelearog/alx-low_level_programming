#include "main.h"

/**
 * *_strncpy - copies a string using at least n bytes or number
 * @dest: the variable to be appended a @src string
 * @src: the variable to be concatenated to the end of @dest
 * @n: the max number of bytes or characters copied from @src
 * Return: A pointer to the resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
