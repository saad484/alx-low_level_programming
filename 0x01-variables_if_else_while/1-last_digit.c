#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* more headers goes there */
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
/* betty style doc for function main goes there */
int main ()
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d and is ", n, n % 10);

    if (n % 10 > 5)
    {
        printf("greater than 5\n");
    }
    else if (n % 10 == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("less than 6 and not 0\n");
    }		
	return (0);
}
