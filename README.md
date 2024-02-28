# simple shell

## File Description
Authors - The files contains information about the owner of this project.
execute.c - The file executes commands by forking child processes
helpers.c - This file contains different customized biult in functions
main.c - The main file that orchestrates the shell. act as main entry.main.h - header file containing prototypes of all functions and other constants
parser.c - The purpose of this file is to parse an input to the shell.path.c - loop over the PATH environment and return if the command finds or NULL when it fails to find the particular command.
print_env.c - The purpose is to print all currently available envs in PATH
