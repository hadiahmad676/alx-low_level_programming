#include <stdio.h>

/**
 * add - adds two numbers
 * a - integer
 * b - integer
 * return: the answer
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * a - integer
 * b - integer
 * return: the answer
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * a - integer
 * b -integer
 * return: the answer
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two numbers
 * a -integer
 * b - integer
 * return: error if doesnt end in 0
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
			return (0);
	}
	return (a / b);
}

/**
 * mod - brings out the modulo of two numbers
 * int a -integer
 * int b -integer
 * return: error if doesnt end in 0
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
			return (0);
	}
	return (a % b);
}
