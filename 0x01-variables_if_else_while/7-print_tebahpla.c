#include <stdio.h>

/**
 * * main - Prints the alphabet in lowercase
 * * in reverse using only putchar
 *  *
 *   * Return: Always 0 (Success)
 **/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)

		putchar(i);

	putchar('\n');

	return (0);
}
