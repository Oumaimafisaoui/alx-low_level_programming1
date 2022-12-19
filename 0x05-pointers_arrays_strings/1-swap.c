#include "main.h"

/**
 * swap_int - takes a pointer and change its content
 * @n: the param
 * Description: rfrefr wedfweffew
 * Return: zero
 **/

void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*b = *a;
	*a = tmp;
}
