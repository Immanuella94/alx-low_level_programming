/*size of data types*/

/**
 * code example
 */
#include<stdio.h>

/*code starts here*/
int main(void)
{
	/*size of char data type*/
	printf("Size of a char: %c byte(s)\n",sizeof(char));
	/*size of int data type*/
	printf("Size of an int: %d byte(s)\n",sizeof(int));
	/*size of long int data type*/
	printf("Size of a long int: %ld byte(s)\n",sizeof(long int));
	/*size of long long int data type*/
	printf("Size of a long long int: %lld byte(s)\n",sizeof(long long int));
	/*size of float data type*/
	printf("Size of a float: %f byte(s)\n",sizeof(float));

	/*end of main program*/
	return(0);
}
