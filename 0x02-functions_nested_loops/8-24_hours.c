#include <main.h>
/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  * from 00:00 to 23:59
  *
  * Return: Always 0
  */
void jack_bauer(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 6; k++)
			{
				for (int l = 0; l <= 9; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
