#include "main.h"

/**
 * puttchhr - writes the charcter cc to stdout
 * @c: the charcter to print
 *
 * Return: On success 1.
 * On error: 1 is returned, and errno is get approprla
*/

int puttchhr(char c)
{
	return (write(1, &c, 1));
}
