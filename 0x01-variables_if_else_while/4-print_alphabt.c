#include <stdio.h>
/**
 * main - using putchar function to print to
 * Return: Always zero for success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	ch++;
	}

	putchar('\n');
	return (0);
}
