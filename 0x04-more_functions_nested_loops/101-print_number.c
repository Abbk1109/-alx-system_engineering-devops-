#include "main.h"

/* print declaration */
void print(unsigned int d);

/**
 * print_number - Prints an integer
 * @n: input integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	print(n);
}
