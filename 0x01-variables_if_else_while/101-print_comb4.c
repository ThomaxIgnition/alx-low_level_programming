#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			if (!((ones == tens) || (tens == hundreds) ||
						(tens > ones) || (hundreds > tens))) /*eliminates repitition*/
			{

				putchar(hundreds);
				putchar(tens);
				putchar(ones)
					if (!(ones == '9' && hundreds == '8')) /*adds commas and spaces*/
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
}
}
putchar('\n');
return (0);
}
