#include "main.h"

/**
 * tokenize - tokenize.
 * @deb: string1
 * Return: 1 if success, 0 if fail.
 */

int tokenize(char *deb)
{
int cont = 0;
while (deb[cont])
{
if (deb[0] == '/')
{
printf("%c\n", deb[0]);
return (1);
}
cont++;
}
return (0);
}

/**
 * compareExit - identifies if first char is a slash.
 * @str1: first string
 * @str2: exit string
 * Return: 1 if yes 0 if no.
 */

int compareExit(char *str1, char *str2)
{
int x = 0;
for (; (*str2 != '\0' && *str1 != '\0') && *str1 == *str2; str1++)
{
if (x == 3)
break;
x++;
str2++;
}
return (*str1 - *str2);
}

/**
 * compareEnv - identifies if first char is a slash.
 * @str1: first string
 * @str2: exit string
 * Return: 1 if yes 0 if no.
 */

int compareEnv(char *str1, char *str2)
{
int x = 0;
for (; (*str2 != '\0' && *str1 != '\0') && *str1 == *str2; str1++)
{
if (x == 2)
break;
x++;
str2++;
}
return (*str1 - *str2);
}

/**
 * identify_string - input.
 * @parameter: prompt
 * Return: string
 **/

char **identify_string(char *parameter)
{
char **buf = malloc(1024 * sizeof(char *));
char *split;
int x = 0;
char *delim = " \t\n";
split = strtok(parameter, delim);
while (split != NULL)
{
buf[x] = split;
x++;
split = strtok(NULL, delim);
}
execute_proc(buf);
return (buf);
}

/**
 * controlC - close the shell
 * @sig: keep using shell
 **/

void  controlC(int sig)
{
(void) sig;
write(1, "\n$ ", 3);
}

