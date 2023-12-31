#include "main.h"

/**
 * _strlen - Finds the lengh of a string
 * @str: the String which length will be found
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strncat - Concats two strings
 * @dest: The string to which characters will be added
 * @src: The strings from which characters will be taken
 * @n: The number of string to be concatened
 * Return: The concatened string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = _strlen(dest);
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
