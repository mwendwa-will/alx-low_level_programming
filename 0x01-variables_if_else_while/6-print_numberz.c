#include <stdio.h>

/**
 * * main - Prints all single digit numbers of base 10 starting from 0,
 * *        only using putchar and without char variables.
 * *
 * * Return: Always 0.
 **/
int main(void)
{
	int num = 48; /*ASCII code for 0*/

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n')
		return (0);
}
