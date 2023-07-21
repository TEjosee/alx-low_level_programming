#include "main.h"
/**
 *positive_or_negative - checking if zero is a pos *itive or negative integer
 *
 *Return:Always zero for success
 *
 */

void positive_or_negative(int i)
{
	if (i > 0)

	 printf("%d is positive\n", i);
	if (i == 0)
	printf("%d is zero\n", i);
	if (i < 0)
	printf("%d is negative\n", i);
}
