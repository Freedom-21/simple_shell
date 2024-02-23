#include "main.h"

/**
 * print_env - a funtion that prints all the available envs in PATH
 * Return: print everything in PATH
 */

void print_env(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
