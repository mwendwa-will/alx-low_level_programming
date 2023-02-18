#include <stdio.h>

/**
 *  * main - Prints all possible combinations of three different digits,
 *   *        in ascending order, separated by a comma followed by a space.
 *    *
 *     * Return: Always 0.
 **/
int main(void)
{
	int digit1, digit2, digit3;

	/* Loop over all digits from 0 to 7 for digit1 */
	for (digit1 = 0; digit1 < 8; digit1++)
	{
		/* Loop over all digits from digit1 + 1 to 8 for digit2 */
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			/* Loop over all digits from digit2 + 1 to 9 for digit3 */
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				/* Print the three digits separated by a comma and a space */
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				/* If we're not at the last combination, print the separator */
				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	/* Print a newline character at the end of the output */
	putchar('\n');

	return (0);
}

