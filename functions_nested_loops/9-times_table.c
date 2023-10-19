#include "main.h"
/**
 *times_table - prints the 9 times table 
*
* Return: nothing
*/

void times_table(void)
{
	int i, n, sum;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			sum = n * i;

			if (sum >= 10)
			{
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}

			else
			{
				_putchar(sum + '0');
			}

			if (i == 9)
			{
				_putchar('\n');
				continue;
			}
			if (n * (i + 1) >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
