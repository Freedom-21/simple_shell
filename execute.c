#include "main.h"

/**
 * execute_cmd - a function that execute a command by creating a child process
 * @argv: an array of strings of the command and its arguments
 * Return: None
 */

void execute_cmd(char **argv)
{
	pid_t child_pid;
	char *cmd_path;
	int exec_return;

	child_pid = fork();

	if (child_pid == 0)
	{
		cmd_path = find_cmd_in_path(argv[0]);

		if (cmd_path != NULL)
		{
			exec_return = execve(cmd_path, argv, environ);
			if (exec_return == -1)
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

