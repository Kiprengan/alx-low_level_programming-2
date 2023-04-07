#include "main.h"

/**
 * flip_bits - returns the number of bits to flip number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to change (integer)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int result;

	sum = 0;
	result = n ^ m;
	while (result)
	{
		sum += result & 1;
		result = result >> 1;
	}
	return (sum);
}
