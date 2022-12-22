#include "main.h"
#include <stdio.h>

/**
 * _strcmp - efwefwfw
 * @s1: frfr
 * @s2: ewfewf
 * Description: efrf
 * Return : efewf
 **/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	
	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
				break;
		j = *(s1 + i) - *(s2 + i);
		i++;

	}
	return (j);
}
