/**
 * main -Entry point
 * prints alphabet in lower case
 * except for 'e' and 'q'
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
	{
		/*scans alphabet and sqips to next value when true*/
		if (abc == 'e' || abc == 'q')
		{
			abc++;
		}
		putchar (abc);
	}
	putchar ('\n');

	/*terminates main function*/
	return (0);
}
