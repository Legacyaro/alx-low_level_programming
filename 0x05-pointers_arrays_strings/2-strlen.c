#include "main.h"

/**
 * _strlen - shows the length of a string
 * @s: srting
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
