#include "function_pointers.h"
/**
 * print_name - Entry point
 * Description: printing name
 * @f: read in
 * @name: being printed
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
