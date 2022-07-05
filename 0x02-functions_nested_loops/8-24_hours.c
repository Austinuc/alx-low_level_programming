#include "main.h"
/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  * from 00:00 to 23:59
  *
  * Return: Always 0
  */
void jack_bauer(void)
{
	int H = 0;
	int M = 0;

	while (H < 24)
	{
		while (M < 60)
		{
			_putchar('0' + (H / 10));
			_putchar('0' + (H % 10));
			_putchar(':');
			_putchar('0' + (M / 10));
			_putchar('0' + (M % 10));
			_putchar('\n');
			M++;
		}
		H++;
	}
}
