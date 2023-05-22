#include "main.h"

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of integers a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
* mul - multiplies two integers
* @a: first integer
* @b: second integer
*
* Return: the multiplication of integers a and b
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
* div - divides two integers
* @a: first integer
* @b: second integer
*
* Return: the division of integers a and b
*/

int div(int a, int b)
{
	return (a / b);
}

/**
* sub - subtracts two integers
* @a: first integer
* @b: second integer
*
* Return: the subtraction of integers a and b
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mod - modules two integers
* @a: first integer
* @b: second integer
*
* Return: the remainder of integers a if divided by b
*/

int mod(int a, int b)
{
	if (b < 0)
	{
		return (a);
	}
	return (a % b);
}
