#include <stdio.h>
/**
 * main - using putchar to print to the standard o *t
 * Return: Always return zero for success
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
