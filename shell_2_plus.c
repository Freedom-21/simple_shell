#include "main.h"

/**
 * main - a main function for a simple shell
 * Return: 0 for success
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	char **argv;
	pid_t child_pid;
	int i;

	while (1)
	{
		printf(":)) ");
		nread = getline(&line, &len, stdin);

		if (nread == -1)
			break;

		line[nread - 1] = '\0';
		argv = malloc(sizeof(char *) * MAX_ARGS);

		if (!argv)
		{
			perror("Allocation error");
			exit(EXIT_FAILURE);
		}
		i = 0;

		argv[i] = strtok(line, " ");
		while (argv[i] != NULL && i < MAX_ARGS - 1)
			argv[++i] = strtok(NULL, " ");

		argv[i] = NULL;
		child_pid = fork();

		if (child_pid == 0)
		{
			char *cmd_path = find_cmd_in_path(argv[0]);

			if (cmd_path != NULL)
			{
				argv[0] = cmd_path;

				if (execve(cmd_path, argv, environ) == -1)
				{	
					perror("./shell");
					free(cmd_path);
					free(argv);
					exit(EXIT_FAILURE);
				}
				free(cmd_path);
			}
			else
			{
				printf("%s: Command not found\n", argv[0]);
				free(argv);
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
			free(argv);
			exit(EXIT_FAILURE);
		}
		free(argv);
	}
	free(line);
	return (0);
}
