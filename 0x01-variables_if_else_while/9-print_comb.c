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
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
