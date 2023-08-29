#include "main.h"
/**
* _strchr - search function
* @s:  string
* @c: charchater to locate
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
int i;
for (i  = 0; s[i] < '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (s[i] == c)
{
return (s + i);
}
return (0);
}
