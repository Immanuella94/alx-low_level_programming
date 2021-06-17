/**
 * main - size of data types
 * Description - prints size of data types:
 * char, int, long int, long long int,
 * and float
 * Return - zero
 */
#include<stdio.h>

int main(void)
	/*program doesn't expect any arguements from start*/
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	/*size of char data type*/

	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	/*size of int data type*/

	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	/*size of long int data type*/

	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	/*size of long long int data type*/

	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	/*size of float data type*/


	return (0);
	/*end of main program*/

}
