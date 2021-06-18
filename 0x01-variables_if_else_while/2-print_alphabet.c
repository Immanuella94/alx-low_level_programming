/**
 * main -Entry point
 * prints alphabet in lower case
 * followed by a new line
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	/*initialize char*/
	char abc = 'a';

	/*prints alphabet*/
	for (abc = 'a'; abc <= 'z'; abc++)
		putchar (abc);
	putchar ('\n');

	/*terminates main function*/
	return (0);
}
