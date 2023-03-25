#include "variadic_functions.h"

/**
 * print_all - function prints anything.
 * @format: list of arguments types passed as parameter.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list v_list;
	unsigned int a = 0, b, c = 0;
	char *str;
	const char arg_t[] = "cifs";

	va_start(v_list, format);
	while (format && format[a])
	{
		b = 0;
		while (arg_t[b])
		{
			if (format[a] == arg_t[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(v_list, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(v_list, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(v_list, double)), c = 1;
			break;
		case 's':
			str = va_arg(v_list, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} a++;
	}
	printf("\n"), va_end(v_list);
}
