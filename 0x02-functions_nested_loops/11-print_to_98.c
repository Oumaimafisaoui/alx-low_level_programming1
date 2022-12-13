#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_to_98 - Something
 *
 * @n: j
 *
 * Description: 'print_alphabet is a function'
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);

}
