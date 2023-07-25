#include "main.h"
/**
 *_puts - the name of yhe function being declared
 *@str: the name of the variable being used
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
