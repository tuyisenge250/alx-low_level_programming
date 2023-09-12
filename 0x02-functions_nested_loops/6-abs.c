#include "main.h"
/**
 * _abs - function difine absolute value of a number
 *
 * @a: parameter
 * Return: always 0
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
