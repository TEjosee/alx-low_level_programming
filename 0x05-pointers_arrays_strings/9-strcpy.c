#include "main.h"
/**
 **_strcpy - the function used in copying srg in the program
 *@dest: pointer variable one
 *@src: pointer variable two
 *Return: dest for success
 */
char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}
	dest[s] = '\0';

	return (dest);
}
