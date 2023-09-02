#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for calculating minimum coins for change.
 * @argc: The number of command-line arguments (including program name).
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return:
 * - 0: The program ran successfully and provided the minimum number of coins.
 * - 1: An error occurred due to incorrect usage,
 * negative input, or other issues.
 */

int main(int argc, char *argv[])
{
int cents;
int coins[] = {25, 10, 5, 2, 1};
int num_coins = 0;
int i;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
num_coins++;
}
}
printf("%d\n", num_coins);
return (0);
}
