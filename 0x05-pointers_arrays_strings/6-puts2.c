#include "main.h"
/**
 *puts2 - function uses in printing number div by 2 wiyhout a rem
 *@str: variable pointing to the variabel
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
