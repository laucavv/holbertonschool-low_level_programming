#include "variadic_functions.h"
/**
 *print_strings - function that prints strings,followed by a new line.
 *@separator: is the string to be printed between strings
 *@n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	if (separator)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{

			s = va_arg(arg, char*);
			if (s)
			{
				printf("%s", s);
			}
			else
			{
				printf("(nil)");
			}
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(arg);
	printf("\n");
}


