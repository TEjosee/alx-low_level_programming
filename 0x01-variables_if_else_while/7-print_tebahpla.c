#include <stdio.h>
/**
 * main - using putchar to print to the standard o *t
 * Return: Always return zero for success
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower > 'a'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
