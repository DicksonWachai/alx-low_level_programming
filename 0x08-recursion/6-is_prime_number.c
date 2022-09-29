#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: integer to be checked
 *
 * Return: 1 if number is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if ((n <= 0) || (n == 1) || (n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0) || (n % 11 == 0))
	{
		return (0);
	}
	return (1);
}
