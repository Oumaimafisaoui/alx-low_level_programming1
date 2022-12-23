#include "main.h"
#include <stdio.h>

/**
 * string_toupper - efewfwefefwf
 * @s: efewf
 * Description: ewfewffwe
 * Return: regr
 **/

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
		{
			*(s + count) = *(s + count) - 32;
			count++;
		}
	}
	return (s);
}
