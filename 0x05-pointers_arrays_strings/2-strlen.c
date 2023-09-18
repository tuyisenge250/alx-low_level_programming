#include "main.h"

/**
 * _strlen - function to print
 * @s: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
