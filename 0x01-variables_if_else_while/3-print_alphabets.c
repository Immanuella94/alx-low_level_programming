/**
 * main - Entry point
 * prints alphabet lowercase
 * followed by uppercase
 * then a new line
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	/*initialize char*/
	char i = 'a';
	char j = 'A';

	/*prints lowercase alphabet*/
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	/*prints uppercase alphabet*/
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	/*puts new line*/
	putchar('\n');

	/*terminates main function*/
	return (0);
}
