#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function adds two numbers
  * @a: first int
  * @b: second int
  *
  * Return: int(a + b)
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function subtracts two numbers
  * @a: first int
  * @b: second int
  *
  * Return: (a - b)
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function multiplies two ints
  * @a: first int
  * @b: second int
  *
  * Return: (a * b)
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function divides two ints
  * @a: first int
  * @b: second int
  *
  * Return: (a / b) if b != 0
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - performs modulo operation
  * @a: first int
  * @b: second int
  *
  * Return: (a % b)
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
