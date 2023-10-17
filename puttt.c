#include "main.h"

/**
 * puttt - print strings
 * @c: string
 * Return: number of byte
*/

int puttt(char *c)
{
	int j = 0;

	if (c)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
		puttchhr(c[j]);
		}
	}
	return (j);
}
