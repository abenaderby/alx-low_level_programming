#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @n1: First number.
 * @n2: Second number
 * Return: Sum of n1 and n2.
 */
int op_add(int n1, int n2)
{
	return (n1 + n2);
}
/**
 * op_sub - Returns the difference of two numbers
 * @n1: First number.
 * @n2: Second number.
 * Return: Difference of n1 and n2.
 */
int op_sub(int n1, int n2)
{
	return (n1 - n2);
}
/**
 * op_mul - Returns the product of two numbers.
 * @n1: First number.
 * @n2: Second number.
 * Return: Results of n1 and n2
 */
int op_mul(int n1, int n2)
{
	return (n1 * n2);
}
/**
 * op_div - Returns the division of two numbers.
 * @n1: First number.
 * @n2: Second number.
 * Return: Quotient of n1 and n2
 */
int op_div(int n1, int n2)
{
	return (n1 / n2);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @n1: First number.
 * @n2: Second number.
 * Return: Remainder of the division of n1 by n2
 */
int op_mod(int n1, int n2)
{
	return (n1 % n2);
}
