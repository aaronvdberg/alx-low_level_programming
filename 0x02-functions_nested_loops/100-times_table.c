#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Entry point
 * Description: prints time tables
 * @n: value read in
 *
 */

void print_times_table(int n)
{

int i, j;
int result;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
{
printf("%d", result);
}
else
{
printf("%4d", result);
}
if (j < n)
{
putchar(',');
}
}
putchar('\n');
}
}
