#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
* print_strings - prints strings
* @separator: space btw argumerts
* @n: number of arguments
*
* Return: prints strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
printf("%s", str == NULL ? "(nil)" :  str);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
}
