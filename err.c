#include "main.h"

/**
 * _errputs - Print a string to the standard error
 * @str: The string to be printed
 *
 * Return: The number of characters printed
 */
int _errputs(char *str)
{
	int i;

	if (!(str))
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
	{
		write(2, &str[i], 1);
	}

	return (i);
}
