#include "main.h"

/**
 * line - the line objects
 * @x: string on line
 * @size: size of the string
 * Return: aS string
 */

char *line(char *x, size_t size)
{
ssize_t line = getline(&x, &size, stdin);
if (line == EOF)
{
free(x);
write(STDOUT_FILENO, "\n", 1);
exit(0);
}
if (x == NULL || line == 1 || line == -1)
{
free(x);
return (NULL);
}
return (x);
}
