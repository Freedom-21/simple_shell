#include "main.h"

/**
 * *_strcpy - function to copy a string
 * @src: a source string to be copied
 * @dest: a destination variable to have the strings from src
 * Return: a pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
