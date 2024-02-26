#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the resulting integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	if (s1[i] != '\0')
	{
		return (s1[i]);
	}
	else if (s2[i] != '\0')
	{
		return (-s2[i]);
	}

	return (0);
}
/**
 * _strlen - function that returns lenght of a string
 * @s: an input string that we need to find its length
 * Return: 0 for success
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0, dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _strdup - duplicates a string
 * @s: string to be duplicated
 * Return: a pointer to duplicated string or NULL if malloc fails
 */

char *_strdup(const char *s)
{
	int len, i;
	char *dup;

	len = _strlen(s) + 1;
	dup - malloc(len * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = s[i];
	return (dup);
}
/**
 * _strcpy - a function to copy from source to destination
 * @src: a source string to be copied
 * @dest: a destination string to have the string copied from source
 * Return: a pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return (dest);
}
