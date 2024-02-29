#include "main.h"
/**
 * _isdigit - check value around 0
 * @c: parameter
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
