#include "main.h"
/**
 * print_c - this function prints a character
 * @args: list of arguments
 * Return: charactes printed
 */
int print_c(va_list args)
{
	print_character(va_arg(args, int));
	return (1);
}
/**
 * print_string - this function prints a string
 * @args: listo of arguments
 * Return: charactes printed
 */
int print_string(va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);

	while (string[i])
	{
		print_character(string[i]);
		i++;
	}
	return (i);
}
/**
 * print_percent - prints char percent
 * @args: list of arguments
 * Return: charactes printed
 */
int print_percent(va_list args)
{
	if (args)
		print_character('%');
	return (1);
}
