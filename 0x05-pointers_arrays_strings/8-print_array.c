#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/**
 * print_array - takes a pointer and change its content
 * @a: the param
 * @n: e§:wq
 * d
 * Description: rfrefr wedfweffew
 * Return: zero
 **/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
