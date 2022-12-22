#include "main.h"
#include <stdio.h>


/**
 * _strncat - efwfeewg
 * Description: wfwgewg
 * @dest: ewfew
 * @src:rfrf
 * @n: rfrfr
 * Return: zero
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}

