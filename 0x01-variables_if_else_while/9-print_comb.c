/**
 * main - Entry point
 * prints single digit number combinations
 * seperaed by comma and space
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	/*initialize int*/
	int a;

	/*prints 1 to 9*/
	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
		/*prints comma and space between numbers*/
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	/*terminate main function*/
	return (0);
}
