#include <stdio.h>

/**
   * main - prints the alphabet except q and e,
    * followed by a new line
     * Return: Always 0 (Success)
      */
int main(void)
{
		char ch;

			for (ch = 'a'; ch <= 'z'; ch++)
			{
				if (ch != 'q' && ch != 'e')
				putchar(ch);
			}
			putchar('\n');
			return (0);
}
