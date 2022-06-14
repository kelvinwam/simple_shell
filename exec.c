#include "main.h"

/**
 * execute -  execute command from id
 * @line_args: args
 * Return: 0 if successful, -1 if fail
 */

int execute(char **line_args)
{
pid_t Pid;
if (line_args == NULL)
{
return (-1);
}
Pid = fork();
wait(NULL);
if (Pid == -1)
{
perror("Pid Error");
return (-1);
}
else if (Pid == 0)
{
execve(line_args[0], line_args, environ);
return (0);
}
return (-1);
}
