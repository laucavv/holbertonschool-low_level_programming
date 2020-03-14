#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@separator: is the string to be printed between numbers
 *@n: is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int value = 0;

		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			value = va_arg(arg, int);
			printf("%d", value);
			if (i < n - 1 && separator)
			{
				printf("%s", separator);
			}
		}
	printf("\n");
	va_end(arg);
}
