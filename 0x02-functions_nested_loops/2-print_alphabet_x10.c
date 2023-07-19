#include "main.h"
/**
 *main - printing *10 alphabet to the console
 *Return: Always zero for success
 *
 */
void print_alphabet_x10(void)
{
	int d;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (d = 'a'; d <= 'z'; d++)
	
	{
		_putchar(d);
	}
	
	
	_putchar('\n');
	}
}
