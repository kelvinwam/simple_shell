#include "main.h"

/**
 * execute- execute command from id
 * @deb: pointer
 * Return: int
 */

void execute(char **deb)
{

char *parametro = (*(deb + 1));
char *s;
char *slash = "/";
char *o;
char *vartoprint = *deb;
char *argv[4];
if ((access(deb[0], F_OK) == 0))
{
argv[0] = deb[0];
argv[1] = parametro;
argv[2] = ".";
argv[3] = NULL;
if (execve(argv[0], argv, NULL) == -1)
{
perror("Error");
}
}
else
{
o = find_cmd(vartoprint);
slash = str_concat(o, slash);
s = str_concat(slash, *deb);
argv[0] = s;
argv[1] = parametro;
argv[2] = ".";
argv[3] = NULL;
if (execve(argv[0], argv, NULL) == -1)
{
perror("Error");
}
}
}
