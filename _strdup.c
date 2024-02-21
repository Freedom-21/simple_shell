#include "main.h"

/**
 * _strdup - duplicates a string
 * @s: the string to duplicate
 * Return: a pointer to the new duplicate string, or NULL if malloc fails
 */

char *_strdup(const char *s)
{
	int len;
	char *dup;
	int i;

	len = _strlen(s) + 1;
	dup = malloc(len * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = s[i];

	return (dup);
}
