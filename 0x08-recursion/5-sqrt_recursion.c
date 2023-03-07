#include "main.h"
/**
 * _sqrt_recursion_helper - a smaller cunk of the
 *  code
 *  @n: value
 *  @low: value
 *  @high: value
 *  Return: int
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	if (low > high)
	{
		return (-1);
	}
	int mid = (low + high) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursion_helper(n, low, mid + 1));
	}
}

/**
 * _sqrt_recursion - outputs the square of a value
 * @n: value
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_recursion_helper(n, 1, n / 2 + 1));
	}
}
