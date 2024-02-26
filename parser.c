#include "main.h"

/**
 * parse_input - a funtion that takes a pointer to input and
 *	returns a pointer to a pointer to a character
 * @line: an input stream of charcters
 * Return: argument vector on success or NULL in failure
 */

char **parse_input(char *line)
{
	char **argv;
	int i = 0;

	argv = malloc(sizeof(char *) * MAX_ARGS);

	if (!argv)
	{
		perror("Allocation error");
		return (NULL);
	}
	argv[i] = strtok(line, " ");

	while (argv[i] != NULL && i < MAX_ARGS - 1)
		argv[++i] = strtok(NULL, " ");

	argv[i] = NULL;
	return (argv);
}
