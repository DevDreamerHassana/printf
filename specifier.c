#include "main.h"

/**
 * format_specifier - handle the specifiers
 * @argument: argument
 * @spec: character specifier
 * @i: a normal counter
 */
void format_specifier(va_list argument, char spec, int *i)
{
	switch (spec)
	{
		case 'c':
			*i += _putchar(va_arg(argument, int));
			break;
		case 's':
			*i += print_string(va_arg(argument, char *));
			break;
		case '%':
			*i += _putchar('%');
			break;
		case 'd':
		case 'i':
			*i += printf("%d", va_arg(argument, int));
			break;
		default:
			_putchar('%');
			_putchar(spec);
			*i += 2;
			break;
	}
}

