#include "main.h"

/**
 * main - entry point to shell program
 * Return: 0 for success
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	char **argv;

	while (1)
	{
		printf(":$ ");
		nread = getline(&line, &len, stdin);

		if (nread == -1)
			break;

		line[nread - 1] = '\0';
		argv = parse_input(line);

		if (argv == NULL)
			continue;

		if (_strcmp(argv[0], "exit") == 0)
			exit(0);

		if (_strcmp(argv[0], "env") == 0)
		{
			print_env();
			free(argv);
			continue;
		}
		execute_cmd(argv);
		free(argv);
	}
	free(line);
	return (0);
}
