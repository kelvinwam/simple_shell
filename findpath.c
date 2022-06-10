#include "main.h"

/*
 * findpath - find path of environment
 * @env: environment
 * Return: string path
 */
char *findpath(char **env)
{
char *y;
int i;
int t = 0;
for (i = 0; env[i] != NULL; i++)
{
if (env[i][0] == 'P' && env[i][1] == 'A'
&& env[i][2] == 'T' && env[i][3] == 'H')
{
t = i;
break;
}
else
continue;
}
if (t)
{
y = _strdup(env[t]);
return (y);
}
return (NULL);
}
