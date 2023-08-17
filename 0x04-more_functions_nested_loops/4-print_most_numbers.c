#include"main.h"
/**
 * print_most_numbers - print all number except 4 and 9
 *
 * Return: numbers fllowed by a new line
 */
void print_most_numbers(void)
{
int n;
for (n = 45; n <= 57; n++)
{
if (n != 50 && n != 52)
_putchar(n);
}
_putchar('\n');
}
