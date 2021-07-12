#include "holberton.h"

/**
 * main - prints number of arguments passed onto it
 *
 * @argc: number of arguments
 * @argv: pointer to string
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int num;

	num = argc - 1;
	printf("%d\n", num);
	return (0);
}
