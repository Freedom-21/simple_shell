# simple shell
# Requirements
## General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Your shell should not have any memory leaks
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
Write a README with the description of your project
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker

## More information

### Output
Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.

The only difference is when you print an error, the name of the program must be equivalent to your argv[0]

## File Description
Authors - The files contains information about the owner of this project.

execute.c - The file executes commands by forking child processes

helpers.c - This file contains different customized biult in functions

main.c - The main file that orchestrates the shell. act as main entry.main.h - header file containing prototypes of all functions and other constants

parser.c - The purpose of this file is to parse an input to the shell.

path.c - loop over the PATH environment and return if the command finds or NULL when it fails to find the particular command.

print_env.c - The purpose is to print all currently available envs in PATH.
