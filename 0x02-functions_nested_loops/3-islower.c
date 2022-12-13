#include "main.h"
#include <unistd.h>
/**
 * _islower - Something
 *
 * Description: 'print_alphabet is a function'
 *
 * Return: Always 0.
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
