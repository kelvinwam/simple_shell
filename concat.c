#include "main.h"

/**
 * concat_path - concantenate the path route with args
 * @path: args.
 * @y: tokenize the path
 * Return: char poitner
 */
char *concat_path(char *path, char *y)
{
char *concat;
concat = NULL;
int size_concat = _concat(path, y);
int i;
int j;
i = 0;
j = 0;
if (path == NULL || y == NULL)
{
return (NULL);
}
concat = malloc(sizeof(char) * size_concat);
if (concat == NULL)
{
return (NULL);
}
while (y[i] != '\0')
{
concat[i] = y[i];
i++;
}
concat[i] = '/';
while (path[j] != '\0')
{
	concat[i + 1] = path[j];
j++;
i++;
}
concat[i + 1] = '\0';
return (concat);
}
/**
 * _concat - function that counts chars concatenated
 * @path_y: tokenize the path route
 * @line_y: tokenize the args
 * Return: total size + char null
 */
int _concat(char *path_y, char *line_y)
{
int v;
int uv;
uv = 0;
for (v = 0; path_y[v] != '\0'; v++, uv++)
;
for (v = 0; line_y[v] != '\0'; v++, uv++)
;
return (uv + 2);
}

