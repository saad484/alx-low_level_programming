#include"variadic_functions.h"
#include<stdarg.h>
/**
* sum_them_all - Sum all the arguments
* @n: named parameter
*
* Return: sum of the arguments
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int x;
int s = 0;

va_list args;
va_start(args, n);

if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++)
{
x = va_arg(args, int);
s += x;
}
va_end(args);
return (s);
}
