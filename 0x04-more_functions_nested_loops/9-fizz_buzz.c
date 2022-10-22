#include <stdio.h>

/**
 * main - print fizz if multiple of 3, buzz if multiple
 * of 5 and fizzbuzz if multiple of 5 and 3
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i == 100)
			printf("Fizz");
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3 == 0))
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
