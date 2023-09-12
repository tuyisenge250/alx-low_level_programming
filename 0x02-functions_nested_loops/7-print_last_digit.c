#include "main.h"

/**
 * print_last_digit - function print last digit
 * @k: parameter
 *Return: always 0
 */
int print_last_digit(int k)
{
	int i;

	i = k % 10;
	if (k < 0)
		i = -i;
	_putchar(i + '0');

	return (i);
}
