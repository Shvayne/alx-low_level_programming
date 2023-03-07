#include "main.h"
/**
 * _pow_recursion - function that behaves like
 * standard library fuction pow
 * @x: input value
 * @y: inpot value
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
