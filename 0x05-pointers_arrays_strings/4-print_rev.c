#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * print_rev - takes a pointer and change its content
 * @str: the param
 * Description: rfrefr wedfweffew
 * Return: zero
 **/

void print_rev(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if(str[i] == '\0')
			break ;
		i++;
	}
	for (i--; i >= 0; i--)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}
