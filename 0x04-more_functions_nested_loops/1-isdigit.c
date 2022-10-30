#include "main.h"

/**
 * _isdigit - checks if char is a digit
 * @c: int to be checked
 * Return: 1 if char is a digit and 0 if it is not
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
