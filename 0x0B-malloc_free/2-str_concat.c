#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
* str_concat - concatenate two strings
* @s1: first string
* @s2: second string
* Return: pointer to newly allocated memory which
* contains the content of the two concatenated string
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int len1;
unsigned int len2;
unsigned int i;
unsigned int j;

len1 = 0;
len2 = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[len1])
len1++;
while (s2[len2])
len2++;

concatenated = malloc(sizeof(char) * len1 + len2 + 1);

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];


for (j = 0; j < len2; j++)
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0';

return (concatenated);

}
