#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function to return time
 * Description: returns time in 24 hours
 * Return: returns 0
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		minute = 0;
		hour++;
	}
}
