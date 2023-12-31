#include "main.h"
#include <stdarg.h>

/**
 * _printf - owen printf that print anything
 * @format: str format
 * Return: total
 */

int _printf(const char *format, ...)
{
	int total = 0;
	va_list args_list_val;

	va_start(args_list_val, format);

	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			if (*(++format) == 'd')
			{
				total += check_print_d(va_arg(args_list_val, int));
			}
			else
			{
				total += check_num_specf(args_list_val, format);
			}
		}
		else
		{
			total += _putchar(*format);
		}
	}


	va_end(args_list_val);
	return (total);
}

/**
 * check_num_specf - owen printf that print anything
 * @args_list_val: agrs value
 * @format: str format
 * Return: total
 */

int check_num_specf(va_list args_list_val, const char *format)
{
	int total = 0;

	if (*format == 'c')
	{
		total += _putchar(va_arg(args_list_val, int));
	}
	else if (*format == 's')
	{
		total += _puts(va_arg(args_list_val, char *));
	}
	else if (*format == '%')
	{
		total += _putchar(*format);
	}
	else if (*format == 'i')
	{
		total += check_print_d(va_arg(args_list_val, int));
	}
	else
	{
		return (-1);
	}


	return (total);
}
