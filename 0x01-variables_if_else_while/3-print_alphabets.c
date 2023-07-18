#include <stdio.h>
/**
 * main - using putchar function to print to
 * Return: Always zero for success
 */
int main(void)
{
	char upper, lower;

		for (upper = 'a'; upper <= 'z'; upper++)
	{
			putchar(upper);
	}
		for (lower = 'A'; lower <= 'Z'; lower++)
	{
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
