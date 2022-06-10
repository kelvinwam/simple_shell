#include "main.h"

/**
 * uninteract - uninteract
 * Return: void.
 */
void uninteract(void)
{
struct stat dir;
char *x;
char **line_args = NULL;
size_t size;
x = NULL;
size = 0;
x = line(x, size);
line_args = tokenizer(x);
if (builtin(line_args, x) == 1)
{
if (stat(line_args[0], &dir) == 0)
execute(line_args);
if (stat(line_args[0], &dir) == -1)
{
line_args[0] = pathfound(line_args[0]);
if (line_args[0] != '\0')
execute(line_args);
else
{
perror("Error");
}
}
}
free(line_args);
free(x);
}
