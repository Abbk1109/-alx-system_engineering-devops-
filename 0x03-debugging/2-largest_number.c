#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third intege
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if(a >= b && a >= c)
	{
		if(b >= c)
		{
			printf("\n\n%.2lf is the 2nd largest number\n", b);
		}
		else
		{
			printf("\n\n%.2lf is the 2nd largest number\n", c);

		}
	}
	else if(b >= a && b >= c)
	{
		if(a >= c)
		{
			printf("\n\n%.2lf is the 2nd largest number\n",a);
		}
		else
		{
			 printf("\n\n%.2lf is the 2nd largest number\n",c);
		}
	}
	else if(a >= b)
	{
		printf("\n\n%.2lf is the 2nd largest number\n", a);
		else
		{
			printf("\n\n%.2lf is the 2nd largest number\n", b);
	}

	 printf("\n\n\t\t\tCoding is Fun !\n\n\n");
	return 0;
}

