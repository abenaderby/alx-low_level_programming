#include "main.h"

int initial_prime(int n, int k);

/**
 * is_prime_number - finds if an integer is a prime number or otherwise
 * @n: number
 * Return: results
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (initial_prime(n, n - 1));
}

/**
 * initial_prime - finds if the number is prime recursive
 * @n: number
 * @k: value
 * Return: results
 */

int initial_prime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (initial_prime(n, k - 1));

}
