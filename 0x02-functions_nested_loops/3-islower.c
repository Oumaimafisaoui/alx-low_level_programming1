#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: 'print_alphabet is a function'
 *
 * Return: Always 0.
 */


char _putchar(char c)
{
	write(1, &c, 1);
}

int _islower(int c)
{
	if(c >= 'a' && c <='z')
		return(1);
	return (0);
}
