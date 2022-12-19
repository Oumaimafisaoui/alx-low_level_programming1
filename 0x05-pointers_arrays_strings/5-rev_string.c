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
	size_t i;
	int j;

	for(i = 0; i < strlen(s); i++)
	{
		for(j = strlen(s); j >= 0; j--)
		{
			char tmp = NULL;
			tmp = s[i];
			s[i] = s[j];
			s[j] = tmp;
		}
	}
}
