/**
 * main - Entry point
 * prints base ten numbers
 * and a new line
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	/*initialize int*/
	int i = 0;

	/*prints 0 through 9*/
	for (i = 0; i < 10; i++)
		putchar(i);
	putchar('\n');

	/*end of main function*/
	return (0);
}
