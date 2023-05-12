#include <stdio.h>
#include <stdlib.h>
#include "main.h"
				
/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
		
int main(int argc, char *argv[])		
{
	int num, i, ans;
	int coins[] = {25, 10, 5, 2, 1};
		
	if (argc != 2)	
	{
		printf("Error\n");
		
		return (1);
	}
		
	num = atoi(argv[1]);
	ans = 0;		
		
	if (num < 0)	
	{
		printf("0\n");
		
		return (0);	
	}
		
	for (i = 0; i < 5 && num >= 0; i++)	
	{		
		while (num >= coins[i])
		{
			ans++;
		
			num -= coins[i];		
		}
		
	}
	printf("%d\n", ans);
		
	return (0);		
}
