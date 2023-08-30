#include "main.h"
/**
* _strlen_recursion - return length of string
* @s: the provided string
* Return: the length of string
*/
int _strlen_recursion(char *s)
{
if (!*s)
{
return 0;
}
return (1 + _strlen_recursion(++s));
}
