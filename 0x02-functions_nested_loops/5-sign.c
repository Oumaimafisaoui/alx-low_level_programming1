#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_sign - Something
 *
 * @c: ehkwbfehw
 *
 * Description: 'print_alphabet is a function'
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, 1");
		putchar('\n');
		return (1);
	}
	else if (n < 0)
	{
		printf("-, -1");
		putchar('\n');
		return (-1);
	}
	else
	{
		printf("0, 0");
		putchar('\n');
		return (0);
	}
}
