#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 * Description: reverses array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 *
 */

void reverse_array(int *a, int n)
{

int i;
int temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}


}
