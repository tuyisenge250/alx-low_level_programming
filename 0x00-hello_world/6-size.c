#include<stdio.h>
/**
 * main - to print size of data types
 *
 * Return: always(0)
 *
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %lu\n", sizeof(a));
printf("Size of an int: %lu\n", sizeof(b));
printf("Size of a long int: %lu\n", sizeof(c));
printf("Size of a long long int: %lu\n", sizeof(d));
printf("Size of a float: %lu\n", sizeof(e));
return (0);
}
