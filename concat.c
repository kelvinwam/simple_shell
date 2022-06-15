#include "main.h"

/**
 * _strcmpdir - comparestrings
 *
 * @str1: string1.
 * @str2: string2.
 *
 * Return: if match.
 **/

int _strcmpdir(char *str1, char *str2)
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
 * charput - character
 * @c: character printed
 * Return: On success 1, -1 on error
 */

int charput(char c)
{
return (write(1, &c, 1));
}

/**
 * place - puts
 * @str: pointer
 * Return: int
 */

void place(char *str)
{
while (*str != '\0')
{
charput(*str);
str++;
}
}

/**
 * _strlen - Length of string
 * @str: string.
 * Return:the length.
 */

int _strlen(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
;
return (x);
}

/**
 * concat - concatenate.
 * @str1: string1.
 * @str2: string2.
 * Return: strings.
 */

char *concat(char *str1, char *str2)
{
char *a;
int len1;
int len2;
int j;
int x;
int e;
if (str1 == NULL)
str1 = "";
if (str2 == NULL)
str2 = "";
len1 = _strlen(str1);
len2 = _strlen(str2);
a = malloc(((len1) +(len2) +1) * sizeof(char));
if (a == NULL)
return (NULL);
for (j = 0; j < len1; j++)
{
a[j] = str1[j];
}
for (x = len1, e = 0; e <= len2; x++, e++)
{
a[x] = str2[e];
}
return (a);
}
