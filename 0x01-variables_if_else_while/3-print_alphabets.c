#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lower case then in upper case
 *
 * Return: Always 0 (Success)
*/

in main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		c++;
	}

	/*prints A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
