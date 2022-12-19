#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/**
 * strcpy - takes a pointer and change its content
 * @src: the param
 * @dest: e§:wq
 * d
 * Description: rfrefr wedfweffew
 * Return: zero
 **/

char* _strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
