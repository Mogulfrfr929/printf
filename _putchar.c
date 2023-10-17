#include "main.h"
#include <unistd.h>

/**
 * _putchar - charcter to standout
 * @c: print charcter
 *
 * Return: On success 1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - charcter to standout
 * @s: str print
 *
 * Return: total
*/

int _puts(const char *s)
{
	int total_len = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		total_len++;
	}
	return (total_len);
}
