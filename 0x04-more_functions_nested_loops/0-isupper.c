#include "main.h"

/**
 * _isupper - confirms if a character is uppercase
 * @c: variable
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
