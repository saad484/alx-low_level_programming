#include "main.h"
/**
* _print_rev_recursion - print the string in reverse
* @s: string to print
* Return: 0 (Success)
*/

void _print_rev_recursion(char *s)
{
static int first = 1;
if (*s == '\0')
{
if (!first)
_putchar(' ');
_putchar('\n');
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
first = 0;
}
