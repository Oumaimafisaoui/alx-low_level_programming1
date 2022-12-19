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
	int j;

	i = 0;
	j = strlen(s);
	for(i = 0; i < strlen(s); i++)
	{
		for(j = 0; j >= 0; j--)
		{
			swap_int((char)s[i],(char) s[j]);
		}
	}
}
