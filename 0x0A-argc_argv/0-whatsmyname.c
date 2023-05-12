#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: array of strings
 * Return: (0) Always
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
