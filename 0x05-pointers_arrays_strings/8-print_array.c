#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/**
 * puts2 - takes a pointer and change its content
 * @str: the param
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
