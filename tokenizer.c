#include "main.h"

/**
 * tokenize - function
 * @x: Pointer.
 * Return: pointer char.
 */
char **tokenize(char *x)
{
char **t = NULL;
char *aux = NULL;
int i, j;
j = count(x);
t = x(sizeof(char *) * (j + 1));
if (t == NULL)
{
return (NULL);
}
aux = strtok(x, " \t\n");
for (i = 0; aux != NULL; i++)
{
t[i] = aux;
aux = strtok(NULL, " \t\n");
}
t[i] = NULL;
return (t);
}

/**
 * count - counter words
 * @x: Pointer of line arguments
 * Return: int.
 */

int count(char *x)
{
int i = 0;
int count = 0;
char *cp = x;

if (x != '\0')
{
while (x[i] != '\0')
{
if ((x[i] == ' ') || (x[i] == '\n') || (x[i] == '\t'))
{
if ((x[i - 1] != ' ') && (cp[0] != x[i]))
{
count++;
}
if ((x[i - 1] != '\n') && (cp[0] != x[i]))
{
count++;
}
if ((x[i - 1] != '\t') && (cp[0] != x[i]))
{
count++;
}
}
i++;
}
}
return (count);
}

