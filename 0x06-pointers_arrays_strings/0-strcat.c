#include "main.h"
#include <stdio.h>


/**
 * _strcat - 'eded'
 * @dest: eded
 * @src: efwef
 * Description: wefewf
 * Return: efef
 **/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while(j >= 0)
	{
		*(dest + i) = *(src + j);
		if(*(src + j) == '\0')
			break ;
		i++;
		j++;
	}
	return (dest);
}

