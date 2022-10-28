#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: copy to
 * @src: copy from
 * @n: no. of char to be printed
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && scr[j] != '\0')
	{
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
