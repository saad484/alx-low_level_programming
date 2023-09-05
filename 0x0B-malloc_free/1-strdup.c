#include "main.h"
#include <stddef.h>
#include<stdlib.h>
/**
* *_strdup - return a pointer to newly allocated space in memory
* @str: the string to duplicate
* Return: a pointer
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int i;
unsigned int len;

len = 0;

if (str == NULL)
{
return (NULL);
}
while (str[len])
len++;

duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
