#include <stdio.h>

/**
 *  * main - prints all possible different combinations of two digits
 *   * Return: 0
 **/
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			/* Print first digit */
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			/* Print separator */
			putchar(',');
			putchar(' ');
			/* Print second digit */
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			/* If it's not the last combination, print a comma and space */
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

