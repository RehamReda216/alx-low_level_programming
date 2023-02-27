#include "main.h"
/**
 * int_strlen - returns the length of a string
 * @s is string
 * Return: length
 */
void int_strlen(char *s)
{
	int longi = 0;

	while (*s != 0)
	{
		longi++;
		s++;
	}

	return (longi);
}
