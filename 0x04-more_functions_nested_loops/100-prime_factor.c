#include <stdio.h>

/**
 * main - finds and prints largest prime factor
 * Return: 0
 */
int main(void)
{
unsigned long int a = 612852475143;
unsigned long int b = 2;
while (b < a / 2)
{
if (a % b == 0)
{
a = a / b;
}
b++;
}
printf("%lu\n", a);
return (0);
}
