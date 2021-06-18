/**
 * main -Entry point
 * prints  reverse alphabet in lower case
 * followed by a new line
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	/*initialize char*/
	char abc = 'z';

	/*prints alphabet*/
	for (abc = 'z'; abc >= 'a'; abc--)
		putchar (abc);
	putchar ('\n');

	/*terminates main function*/
	return (0);
}
