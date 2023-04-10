#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function to return how many times we need to flip to get
 * another binary number
 * @n: input number
 * @m: number we need to convert n to
 * Return: how many times we need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_m_n = n ^ m;

	/**
	 * this gets the xor of m and n using the ^ operator
	 * this gives 1 if the bits are different and 0 if
	 * they are same.
	 */
	unsigned int count = 0;

	while (xor_m_n)
	{
		count += xor_m_n & 1;
		/* add 1 to the count if the rightmost bit is 1 */
		xor_m_n >>= 1;
		/* shift the bits in xor by one */
	}
	return (count);
}
