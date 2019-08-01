#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: string used as format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0, j;

	while (format && format[i])
	{
		va_start(args, format);
		while (format[i])
		{
			j = 1;
			switch (format[i++])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				j = 0;
				break;
			}
			if (format[i] && j)
				printf(", ");
		}
		va_end(args);
	}
	printf("\n");
}
