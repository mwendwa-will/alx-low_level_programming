#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Print the value of n */
	printf("n = %d\n", n);

	/* Get the last digit of n */
	int last_digit = n % 10;

	/* Print the last digit of n */
	printf("Last digit of n is %d\n", last_digit);

	return (0);
}

