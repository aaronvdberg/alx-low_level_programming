#include "main.h"

/**
 * print_line - Entry point
 * @n: Number of underscores between dollar signs
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
