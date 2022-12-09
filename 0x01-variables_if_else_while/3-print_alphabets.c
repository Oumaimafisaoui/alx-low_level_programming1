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
	char j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
