#include "main.h"
/**
 * swap_int - swap value
 * @a: parametr1
 * @b: parameter 2
 * Return : a, b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
