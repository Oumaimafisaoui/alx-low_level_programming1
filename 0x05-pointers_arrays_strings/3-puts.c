#include "main.h"
#include <unistd.h>
/**
 * _puts - takes a pointer and change its content
 * @s: the param
 * Description: rfrefr wedfweffew
 * Return: zero
 **/

void _puts(char *str)
{
	while(*str)
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}

