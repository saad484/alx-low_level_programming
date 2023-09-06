#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * is_space - Checks if a character is a space, tab, or newline.
 * @c: The character to check.
 *
 * Return: 1 if the character is a space, tab, or newline; 0 otherwise.
 */
int is_space(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int count;
int in_word;
count = 0;
in_word = 0;
for (; *str; str++)
{
if (is_space(*str))
in_word = 0;
else if (!in_word)
{
in_word = 1;
count++;
}
}
return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings containing the words, or NULL on failure.
 */
char **strtow(char *str)
{
int i;
int j;
int word_len;
int word_count;
char **words;

if (str == NULL || *str == '\0')
return (NULL);
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0; i < word_count; i++)
{
while (is_space(*str))
str++;
word_len = 0;

while (str[word_len] && !is_space(str[word_len]))
word_len++;

words[i] = malloc((word_len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (j = 0; j < word_len; j++)
words[i][j] = str[j];
words[i][j] = '\0';

str += word_len;
}
words[word_count] = NULL;
return (words);
}
