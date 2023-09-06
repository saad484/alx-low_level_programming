#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to a new string containing concatenated arguments,
 *         or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
int i;
int j;
int len;
int index;
char *concatenated;

if (ac == 0 || av == NULL)
return (NULL);
len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}
concatenated = malloc(sizeof(char) * (len + 1));
if (concatenated == NULL)
return (NULL);
index = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
concatenated[index++] = av[i][j];
concatenated[index++] = '\n';
}
concatenated[index] = '\0';
return (concatenated);
}
