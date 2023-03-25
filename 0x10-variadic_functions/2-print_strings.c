#include "variadic_functions.h"

/**
  * print_strings - function prints string.
  * @separator: string between string
  * @n: number of string
  *
  * Return: Nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v_list;
	unsigned int a = 0;
	char *str;

	if (n > 0)
	{
		va_start(v_list, n);

		while (a < n)
		{
			str = va_arg(v_list, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (a != n - 1 && separator != NULL)
				printf("%s", separator);

			a++;
		}

		va_end(v_list);
	}

	printf("\n");
}
