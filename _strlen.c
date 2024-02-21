#include "main.h"

/**
 * _strlen - function returns lenght of string
 * @s: a string to be returned the length
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
