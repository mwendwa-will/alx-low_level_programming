#include <stdio.h>

/**
 *  * main - prints all possible combinations of single-digit numbers
 *   * Return: Always 0 (Success)
 **/
int main(void)
{
	int d; /* declare variable to store current digit */
	int c = ','; /* declare variable for comma */
	int s = ' '; /* declare variable for space */

	for (d = 0; d < 10; d++) /* iterate through digits 0-9 */
	{
		putchar(d + '0'); /* print current digit */
		if (d != 9) /* if current digit is not 9 */
		{
			putchar(c); /* print comma */
			putchar(s); /* print space */
		}
	}
	putchar('\n'); /* print newline character */

	return (0);
}

