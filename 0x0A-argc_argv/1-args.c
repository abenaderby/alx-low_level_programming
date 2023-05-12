#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array of strings
 * Return: (0) Always
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
