#include <stdio.h> #include <unistd.h>
/**
 *main - using putchar to print to std error
 *
 *Return: Always return one for success
 *
 */
int putchar(void)
{
	char ch[80] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	putchar(ch);
	return (1);
}
