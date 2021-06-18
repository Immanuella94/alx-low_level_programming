/**
 * main - Entry point
 * prints single digit number combinations
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	/*initialize int*/
	int a;

	/*code*/
	for (a = '0'; a <= '9'; a++)
		putchar(a);
	if (a != '9')
		putchar(',');
	putchar(' ');

	/*terminate main function*/
	return (0);
}
