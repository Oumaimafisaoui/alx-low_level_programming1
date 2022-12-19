#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * rev_string - takes a pointer and change its content
 * @s: the param
 * Description: rfrefr wedfweffew
 * Return: zero
 **/

void rev_string(char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	for (i--; i >= 0; i--)
		write(1, &s[i], 1);
	write(1, "\n", 1);
}
