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
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	putchar('\n');
}
