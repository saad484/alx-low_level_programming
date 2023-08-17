#include"main.h"
/**
 * print_numbers - prints number from 0 to 9 followed by a new line
 * Return: numbers form 0 to 9
 */
void print_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
_putchar("%d", n);
}
_putchar("\n");
}
