#include "main.h"

/**
 * _memset - fills 
 * @s: memory area
 * @b: fgef
 * @n: fr
 * Description: efewf
 * Return: wfwr
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
}
