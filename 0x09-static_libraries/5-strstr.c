#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
{
return (haystack);
}
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
}
return (NULL);
}
