#include "main.h"

/**
 * _strncmp - compare the function with a size
 * @a: string 1
 * @b: string 2
 * @n: size
 * Return: two strings compare on success
 */
int _strncmp(char *a, char *b, size_t n)
{
while (n && *a && (*a == *b))
{
++a;
++b;
--n;
}
if (n == 0)
{
return (0);
}
else
{
return (*(char *)a - *(char *)b);
}
}
/**
 * _strlen -the size of a string
 * @s: string
 * Return: size of string
 */
int _strlen(char *s)
{
int e;
while (*s != '\0')
{
e++;
s++;
}
return (e);
}
/**
 * _strcpy - copy a string
 * @back: string to get back
 * @src: string to copy
 * Return: pointer function
 */
char *_strcpy(char *back, char *src)
{
int o;
for (o = 0; src[o] != '\0'; o++)
{
back[o] = src[o];
}
back[o] = '\0';
return (back);
}
/**
 * _strcmp - comparing two strings
 * @a: string 1
 * @b: string 2
 * Return: strings compare
 */
int _strcmp(char *a, char *b)
{
while (*a)
{
if (*a != *b)
{
break;
}
a++;
b++;
}
return (*(char *)a - *(char *)b);
}
/**
 * _strdup - duplicate a string an get allocated
 * @src: thing to get dup
 * Return: string duplicated
 */
char *_strdup(char *src)
{
int e;
char *str;
char *m;
str = NULL;
m = NULL;
e = 0;
while (src[e])
{
e++;
}
str = malloc(e + 1);
m = str;
while (*src)
*m++ = *src++;
*m = '\0';
return (str);
}

