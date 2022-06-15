#include "main.h"

/**
 * *_strncat - a function that concatenates two strings using
 * at most n bytes from @src
 * @dest: first variable that holds strings to be concatenated
 * @src: second variable tha holds string to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for(i=0; dest[i] != '\0' ; i++);
	{
		for(j=0; src[j] && i < n; j++)
		{
			dest[i]=src[j];
			i++;
		}
		dest[i]='\0';
		return (dest);
	}
}
