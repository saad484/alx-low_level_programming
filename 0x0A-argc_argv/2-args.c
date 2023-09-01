#include <stdio.h>
/**
* main - return the name of the program
* @argc: argc
* @argv: argv
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int i = 0;

for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
