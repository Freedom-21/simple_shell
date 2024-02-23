#include "main.h"

/**
 * execute_cmd - a function that creates processes and execute them
 * @argv: a pointer to an array of argument vectors
 * Return: execute process on success or exit with error if not
 */

void execute_cmd(char **argv)
{
	pid_t child_pid;
	char *cmd_path;

	child_pid = fork();

	if (child_pid == 0)
	{
		cmd_path = find_cmd_in_path(argv[0]);

		if (cmd_path != NULL)
		{
			if (execve(cmd_path, argv, environ) == -1)
			{
				perror("./shell");
				free(cmd_path);
			}

			exit(EXIT_FAILURE);
		}

		else
		{
			printf("%s: Command not found\n", argv[0]);
			exit(EXIT_FAILURE);
		}
	}
	else if (child_pid > 0)
	{
		wait(NULL);
	}
	else
	{
		perror("fork");
	}
}

