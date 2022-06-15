#include "main.h"

/**
 * builtin - function builtins
 * @arg: args double pointer
 * @buf: buf of builtins
 * Return: 0 on success.
 */
int builtin(char **arg, char *buf)
{
int i = 0;
char *builtins_str[] = {
"env",
"exit"
};
int (*builtins_func[])(char **, char *) = {&execute_env, &exit};
if (arg[0] == NULL)
return (-1);
while (i < 2)
{
if (_strcmp(arg[0], builtins_str[i]) == 0)
return ((*builtins_func[i])(arg, buf));
i++;
}
return (1);
}
/**
 * execute_env - execute environment
 * @arg: double pointer
 * @buf: buf of array
 * Return: 0 on success.
 */
int execute_env(char **arg, char *buf)
{
int i = 0;
(void) buf;
(void) arg;

while (environ[i] != NULL)
{
write(1, environ[i], _strlen(environ[i]));
write(1, "\n", 1);
i++;
}
return (1);
}
/**
 * exitt - exit program
 * @arg: double pointer.
 * @buf: buf of array
 * Return: 0 on success
 */
int exitt(char **arg, char *buf)
{
free(buf);
free(arg);
exit(0);
return (1);
}
