#include "main.h"
/**
 * largest_number - retur
 * Description: 'freff wvwrv'
 * @a: first
 * @b: second
 * @c: third
 * Return: largest
 **/

int largest_number(int a, int b, int c)
{
	int l;

	if (a >= b && a >= c)
	{
		l = a;
	}
	else if (b >= a && b >= c)
	{
		l = b;
	}
	else
	{
		l = c;
	}
	return (l);
}
