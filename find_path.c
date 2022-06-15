#include "main.h"

/**
 * find_cmd - path.
 * @cmd: first position.
 * Return: string.
 **/

char *find_cmd(char *cmd)
{
DIR *folder;
struct dirent *entry;
char *deb, comp, **str  = malloc(sizeof(char) * 1024);
char **split = malloc(sizeof(char) * 1024);
int x;
while (*environ != NULL)
{
if (!(_strcmpdir(*environ, "PATH")))
{
*str = *environ;
for (x = 0; x < 9; x++, split++, str++)
{
*split = strtok(*str, ":='PATH'");
folder = opendir(*split);
if (folder == NULL)
{
perror("Unable to read directory");
}
while ((entry = readdir(folder)))
{
deb = entry->d_name;
comp = _strcmpdir(deb, cmd);
if (comp == 0)
{
return (*split);
}
if (deb == NULL)
{
perror("Error");
}}}}
environ++;
}
return ("Error: Not Found");
}
