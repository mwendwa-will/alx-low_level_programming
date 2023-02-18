#include <stdio.h>

/**
 *  * main - Prints all possible combinations of two two-digit numbers,
 *   *        ranging from 0-99, separated by a comma followed by a space.
 *    *
 *     * Return: Always 0.
 **/
int main(void)
{
	int i, j;

	/* Loop through all possible two-digit numbers */
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			/* Check that the second number is larger than the first */
			if (i < j)
			{
				/* Print the two numbers with a space in between */
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				/*
				 * Add a comma and a space after each pair of numbers,
				 ** except for the last pair
				 */
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

