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

#endif /* MAIN_H */

