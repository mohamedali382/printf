#include "main.h"

/**
 * print_int - print integers
 * @inti: arguments to print
 * Return: number of charcters
*/

int print_int(va_list inti)
{
	int no = va_arg(inti, int);
	int numb, end = no % 10, digit, ex = 1, i = 1;

	no = no / 10;
	numb = no;

	if (end < 0)
	{
		puttchhr('-');
		numb = -numb;
		end = -end;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			ex = ex * 10;
			numb = numb / 10;
		}
		numb = no;

		while (ex > 0)
		{
			digit = numb / ex;
			puttchhr(digit + '0');
			numb -= (digit * ex);
			ex = ex / 10;
			i++;
		}
	}
	puttchhr(end + '0');
	return (i);
}

#include "main.h"

/**
 * print_dec - prints decimal
 * @inti: argument to print
 *
 * Return: number of characters printed
 */

int print_dec(va_list inti)
{
	int no = va_arg(inti, int);
	int numb, end = no % 10, digit, ex = 1, i = 1;

	no = no / 10;
	numb = no;

	if (end < 0)
	{
		puttchhr('-');
		numb = -numb;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			ex = ex * 10;
			numb = numb / 10;
		}
		numb = no;

		while (ex > 0)
		{
			digit = numb /ex;
			puttchhr(digit + '0');
			numb -= (digit * ex);
			ex = ex / 10;
			i++;
		}
	}
	puttchhr(end + '0');

	return (i);
}
