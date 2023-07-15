#include <stdio.h>
#include <unistd.h>
/**
 *main - using putchar to print to std error
 *
 *Return: Always return zero for success
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
