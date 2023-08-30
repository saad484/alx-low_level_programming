#include "main.h"
/**
* factorial - retrun the factorail of a given number
* @n: given number
* Return: the factorail of the number
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n ==  1)
{
return (1);
}
return (n * factorial(n - 1));
}
