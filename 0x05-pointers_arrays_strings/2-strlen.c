#include "main.h"
/**
 *_strlen - function used in printing the lenght of strings
 *@s: variable
 *Return: rrturn lenght for sucvess
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
