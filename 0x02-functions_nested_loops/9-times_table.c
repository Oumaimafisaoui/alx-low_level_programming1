#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * times_table - Something
 *
 * Description: 'print_alphabet is a function'
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int a, b, o;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			o = a * b;
			_putchar(44);
			_putchar(32);
			if (o <= 9)
			{
				_putchar(32);
				_putchar(o + 48);
			}
			else
			{
				_putchar((o / 10) + 48);
				_putchar((o % 10) + 48);
			}
		}
		_putchar('\n');
	}

}
