#include "main.h"
#include <stdio.h>
/**
 * time_table - function to print time table
 *
 * Return (0)
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			printf("%d, ", result);
		}
	}
	printf("\n");
}
