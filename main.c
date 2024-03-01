#include "main.h"

/**
 * main - entry point to shell program
 * Return: 0 for success
 */

int main(void)
{
	char **argv,  *line = NULL;
	ssize_t nread;
	size_t len = 0;

	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			printf("$ ");
			nread = getline(&line, &len, stdin);
			if (nread == -1)
				break;
			line[nread - 1] = '\0';
			argv = parse_input(line);
			if (argv == NULL)
				continue;
			if (_strcmp(argv[0], "exit") == 0)
			{
				handle_exit();
			}
			if (_strcmp(argv[0], "env") == 0)
			{
				print_env();
				free(argv);
				continue;
			}
			execute_cmd(argv);
			free(argv);
		}
	}
	else
	{
		while	((nread = getline(&line, &len, stdin)) != -1)
		{
			line[nread - 1] = '\0';
			argv = parse_input(line);
			if (argv != NULL)
			{
				execute_cmd(argv);
				free(argv);
			}
		}
	}
	free(line);
	return (0);
}
