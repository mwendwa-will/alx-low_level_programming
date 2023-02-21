/**
 ** print_alphabet_x10 - Prints the alphabet in lowercase using only putchar
 *
 **/
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	}

}
