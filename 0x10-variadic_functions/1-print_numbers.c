#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * Description: printing numbers
 * @n: being read in
 * @separator: number printed between numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list ap;
unsigned int i;
va_start(ap, n);

for (i = 0; i < n; i++)
{
int num = va_arg(ap, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

va_end(ap);
printf("\n");
}
