#include "main.h"
#include <stdio.h>

int main(void)
{
	int l;

	l = 0;
	print_line(l);
	printf("print line 0\n");

	l = -4;
	print_line(l);
	printf("print line -4\n");

	l = 10;
	print_line(l);
	printf("print line 10\n");

	return (0);
}
