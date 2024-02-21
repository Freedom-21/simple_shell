#include "main.h"

/**
 * find_cmd_in_path - a function to find command in PATH
 * @cmd: the command 
 * Return: the full path if it found or NULL is it fails to find
 */

char *find_cmd_in_path(char *cmd)
{
	char *path, *path_copy, *token, *full_path;
	path = getenv("PATH");
	path_copy = _strdup(path);
	token = strtok(path_copy, ":");

	if (cmd[0] == '/')
	{
		if (access(cmd, X_OK) == 0)
		{
			free(path_copy);
			return (_strdup(cmd));
		}
		free(path_copy);
		return (NULL);
	}
	while (token != NULL)
	{
		full_path = malloc(_strlen(token) + _strlen(cmd) + 2);
		sprintf(full_path, "%s/%s", token, cmd);
		
		if (access(full_path, X_OK) == 0)
		{
			free(path_copy);
			return (full_path);
		}

		free(full_path);
		token = strtok(NULL, ":");
	}

	free(path_copy);
	return (NULL);
}
