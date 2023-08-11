#include <stdio.h>

/**
   * main - prints the lowercase alphabet in reverse,
    * followed by a new line, using putchar
     * Return: Always 0 (Success)
      */
int main(void)
{
		char rch;

		for (rch = 'z'; rch >= 'a'; rch--)
		{
		putchar(rch);
		}
		putchar('\n');
		return (0);
}

