#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'I am lazy'
 *
 * Return: zero
 **/
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
