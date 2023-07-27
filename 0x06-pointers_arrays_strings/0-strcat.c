#include "main.h"
/**
 **_strcat - function used in concatinating
 *@dest: pointet integer
 *@src: pointer integer
 *Return: return dest for success
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
		return (dest);
}
