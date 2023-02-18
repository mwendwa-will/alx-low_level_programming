#include <stdio.h>

/**
 *  * main - Prints all possible combinations of two different digits,
 *   *        in ascending order, separated by a comma followed by a space.
 *    *
 *     * Return: Always 0.
 **/
int main(void)
{
	/* Declare variables for two digits */
	int digit1, digit2;

	/* Loop through all combinations of two digits */
	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			/* Print the two digits */
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			/* Check if this is the last combination */
			if (digit1 == 8 && digit2 == 9)
				continue;

			/* Print the comma and space separator */
			putchar(',');
			putchar(' ');
		}
	}

	/* Print a newline character at the end */
	putchar('\n');

	return (0);
}

