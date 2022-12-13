#include "main.h"
#include <unistd.h>
/**
 * _isalpha - Something
 *
 * @c: ehkwbfehw
 *
 * Description: 'print_alphabet is a function'
 *
 * Return: Always 0.
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
