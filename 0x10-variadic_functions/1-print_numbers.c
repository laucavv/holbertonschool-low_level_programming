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

	if (separator)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			value = va_arg(arg, int);
			if (i == 0)
			{
				printf("%d", value);
			}
			else
			{
				printf("%s%d", separator, value);
			}
		}
	}
	va_end(arg);
	printf("\n");
}
