#include <stdio.h>

/**
 * main - print all single digit numbers to base ten
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
