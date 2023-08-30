#include "main.h"
/**
* _print_rev_recursion - print the string in reverse
* @s: string to print
* Return: 0 (Success)
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
