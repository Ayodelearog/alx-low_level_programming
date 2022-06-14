#include "main.h"

/**
 * _strlen - returns the lenth of a string
 *
 * @s: A string to be tested
 * @len: A variable to store the lenght of the string 's'
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len);
	return (0);
}
