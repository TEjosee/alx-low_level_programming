#include "main.h"
/**
 *print_rev - function used in printing strinvs in reverse
 *
 *@s: the pointer pointing to t
 */
void print_rev(char *s)
{
	int t;

	t = 0;
	while (s[t] != '\0')
	{
		t++;
	}
	for (t--; t >= 0; t--)
	{
		_putchar(s[t]);
	}
		_putchar('\n');
}
