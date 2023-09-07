#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1;
unsigned int len2;
unsigned int i;
unsigned int j;
char *concat;

len1 = 0;
len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
concat = malloc((len1 + n + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < n; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}
