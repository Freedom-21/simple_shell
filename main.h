#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_ARGS 64

extern char **environ;

int _strlen(const char *s);
char *find_cmd_in_path(char *cmd);
char *_strdup(const char *s);
void handle_exit(void);
void execute_cmd(char **argv);
char **parse_input(char *line);
ssize_t read_input(char **line, size_t *len);
int _strcmp(char *s1, char *s2);
void print_env(void);

#endif /* MAIN_H */

