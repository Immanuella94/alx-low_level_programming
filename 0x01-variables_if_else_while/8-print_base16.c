/**
 * main - Entry point
 * prints base 16 numbers
 * and a new line
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	/*initialize int*/
	int i;

	/*print 0 to 9*/
	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i); /*print ascii for int i*/
	}
	/*print a to f*/
	for (i = 0; i <= 5; i++)
	{
		putchar('a' + i); /*prints ascii for int i*/
	}
	putchar('\n');

	/*end of main function*/
	return (0);
}
