#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * puts2 - takes a pointer and change its content
 * @str: the param
 * Description: rfrefr wedfweffew
 * Return: zero
 **/

void puts2(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(i % 2 == 0)
			write(1, &str[i], 1);
		else
			i++;
		i++;
	}
	write(1, "\n", 1);
}