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
	int i = '0';
	int h = 'a';

	/*prints 0 through 9*/
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	/*prints a through e*/
	for (h = 'a'; h <= 'e'; h++)
		putchar(h);
	putchar('\n');

	/*end of main function*/
	return (0);
}
