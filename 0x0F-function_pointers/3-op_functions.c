#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds two int
 * @a: one int
 * @b: second int
 * Return: result
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}
/**
 * op_sub - subtracts two int
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_sub(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}
/**
 * op_mul - multiplies two int
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}
/**
 * op_div - divide two int
 * @a: first value
 * @b: second value
 * Return: result
 */
int op_div(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}
/**
 * op_mod - gets the mod of two int
 * @a: first value
 * @b: second value
 * Return: result
 */
int op_mod(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}
