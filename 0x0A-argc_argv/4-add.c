#include <stdio.h>
#include <stdlib.h>

/**
* is_positive_intger_isdigit - return the sum
* @str: string to check
* Return: 0 or 1
*/
int is_positive_intger_isdigit(const char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* main - return  the add of two positive number
* @argc: argc
* @argv: argv
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (; i < argc; i++)
{
if (is_positive_intger_isdigit(argv[i]))
{
int n;
n = atoi(argv[i]);
if (n > 0)
{
sum += n;
}
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
