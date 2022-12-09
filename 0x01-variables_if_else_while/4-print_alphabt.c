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

	i = 'a';
	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
			;
		else
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
