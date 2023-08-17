#include"main.h"
/**
 * _isdigit - checks for digit
 * @c: char to check
 *
 * Return: 1 if a digit otherwise return 0
 */
int _isdigit(int c)
{
if  (c >= 48 && c <= 57)
return (1);
else
return (0);
}
