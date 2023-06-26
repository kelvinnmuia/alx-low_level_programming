/**
 * swap_int - function
 * @a: first swap integer
 * @b: second swap integer
 * Return: Returns 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
