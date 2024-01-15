#include <stdio.h>

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: result of a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - divide two integers
 * @a: first integer
 * @b: second integer
 * Return: result of a / b
 */
int divide(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return 0;
	}
	return (a / b);
}

/**
 * mod - calculate the remainder of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by zero\n");
		return 0;
	}
	return (a % b);
}

/**
 * mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}
