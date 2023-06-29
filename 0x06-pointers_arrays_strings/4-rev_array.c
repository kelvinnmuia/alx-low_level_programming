#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - function
 * @a: array
 * @n: number of array elements
 * Return: returns 0
 */
void reverse_array(int *a, int n)
{
	int *srt_pnt = a;
	int *en_pnt = a + n - 1;

	while (srt_pnt < en_pnt)
	{
		int temp = *srt_pnt;
		*srt_pnt = *en_pnt;
		*en_pnt = temp;

		srt_pnt++;
		en_pnt--;
	}
}
