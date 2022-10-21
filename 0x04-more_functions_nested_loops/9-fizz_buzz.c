#include <stdio.h>

/**
 * main - function is a solution to classic fizz buzz test
 *
 * Return: void
 */
void main(void)
{
	int i;

	for (i = 0; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
