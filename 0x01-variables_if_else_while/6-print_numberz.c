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
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
