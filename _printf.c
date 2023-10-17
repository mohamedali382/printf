#include "main.h"

/**
 *_printf - print anyrhing
 * @format: format specifier
 * Return: no bytes
*/

int _printf(const char *format, ...)
{
	unsigned int i, cout, co = 0;

	va_list ptr;

	va_start(ptr, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (!format)
		return (-1);
	if ((format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			puttchhr(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			puttchhr(va_arg(ptr, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			cout = puttt(va_arg(ptr, char *));
			i++;
			co += (cout - 1);
		}
		else if (format[i + 1] == 'd')
		{
			cout = print_int(ptr);
			i++;
			co += (cout - 1);

		}
		else if (format[i + 1] == '%')
		{
		puttchhr('%');
		}
		co += 1;
	}
	va_end(ptr);
	return (co);
}
