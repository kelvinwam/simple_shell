#define _MAIN_H_
#ifndef _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>
#include <stdef.h>

/*global environment*/
extern char **environ;

/*shell.c*/
int simple(void);

/*line.c*/
char *line(char *x, size_t size);

/*tokenizer.c*/
int tokenize(char *deb);
int compareExit(char *str1, char *str2);
int compareEnv(char *str1, char *str2);
char **identify_string(char *parameter);
void controlc(int sig);

/*exec.c*/
void execute(char **deb);

/*uninteract.c*/
void uninteract(void);

/*findpath.c*/
char *find_cmd(char **cmd);

/*func_strings.c*/
int _strncmp(char *a, char *b, size_t n);
int _strlen(char *s);
char *_strcpy(char *back, char *src);
int _strcmp(char *a, char *b);
char *_strdup(char *src);

/*concat.c*/
int _strcmpdir(char *str1, char *str2);
int charput(char c);
int _strlen(char *str);
char *concat(char *str1, char *str2);

/*builtin.c*/
int builtin(char **arg, char *buf);
int execute_env(char **arg, char *buf);
int exitt(char **arg, char *buf);

#endif
