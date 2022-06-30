#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the dedstination string.
 * @s2: the source string.
 * @n: size of the string.
 * Return: returns a pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	for (index = 0; s1[index]; index++)
	{
		len++;
	}

	concat = malloc(sizeof(char) * (len + 1));

	len = 0;

	for (index = 0; s1[index]; index++)
	{
		concat[len++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
	{
		concat[len++] = s2[index];
	}
	concat[len] = '\0';

	if (concat == NULL)
	{
		return (NULL);
	}
	if ((s1 == NULL) && (s2 == NULL))
	{
		s1 = "";
		s2 = "";
	}
	return (concat);
}
