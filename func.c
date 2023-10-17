#include "main.h"

/**
 * check_print_d - check of %d specfer
 * @n: num
 * Return: putchar.
 */
int check_print_d(int n)
{
	int total = 0;

	if (n < 0)
	{
		total += _putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		total += check_print_d(n / 10);
	}
	return (total + _putchar(n % 10 + '0'));
}
