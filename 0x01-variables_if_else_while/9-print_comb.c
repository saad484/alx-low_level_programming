#include<stdio.h>
/**
  * main - prints all possible combinations of a single-digit numbers,
   * Separated by a comma and followed by a space
    * Return 0 (Success)    
     */
int main(void)
{
		int n;

		for (n = 48; n < 58; n++)
		{
		putchar(n);
		if (n != 57)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');
		return (0);
}
