#include <stdio.h>

/**
 *  * main - prints all the numbers of base 16 in lowercase,
 *   *        followed by a new line
 *    * Return: Always 0 (Success)
 **/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++) /* loop through digits 0-9 */
		putchar(i + '0'); /* print the digit */

	for (i = 'a'; i < 'g'; i++) /* loop through letters a-f */
		putchar(i); /* print the letter */

	putchar('\n'); /* print newline character */

	return (0);
}

