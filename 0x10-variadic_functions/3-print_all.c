#include "variadic_functions.h"
/**
 *print_char - function that prints char.
 *@c: char
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 *print_integer - function that prints integer.
 *@i: int
 */
void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 *print_float - function that prints float.
 *@f: double
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 *print_string - function that prints strings
 *@s: char
 */
void print_string(va_list s)
{
	if (s)
	{
		printf("%s", va_arg(s, char *));
	}
	else
	{
		printf("(nil)");
	}
}
/**
 *print_all - function that prints anything.
 *@format: format
 */
void print_all(const char * const format, ...)
{
	va_list form;
	int i = 0, j;
	char *separator = "";

	for_t formats[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(form, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].of != NULL)
		{
			if (format[i] == formats[j].of[0])
			{

				printf("%s", separator);
				formats[j].f(form);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(form);
}
