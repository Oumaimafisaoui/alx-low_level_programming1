#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_last_digit - Something
 *
 * @i: ehkwbfehw
 *
 * Description: 'print_alphabet is a function'
 *
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	int result;

	result = i % 10;
	if (result < 0)
	{
		_putchar(-result + 48);
		return (-result);
	}
	else
	{
		_putchar(result + 48);
		return (result);
	}
}
