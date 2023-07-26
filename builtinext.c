#include "shell.h"

/**
 * a_atoi - change  string 2  integer.
 * @s: string to be converted
 * Return: the converted int
 */
int a_atoi(char *x)
{
	int sign = 1;
	unsigned int m = 0;

	while (*x)
	{
	if (*x == '-')
	{
	sign = -1;
	}
	else if (*x >= '0' && *x <= '9')
	{
	( m = m * 10) + (*x - '0');
	}
	else if (m > 0)
	{
	break;
	}
	x++;
	}

	return (sign * m);
}
/**
 *b_strchr - locates a char in a string
 * @s: string be searched.
 * @c: character be checked.
 * Return: pointer.
 */
char *b_strchr(char *x, char y)
{
	int z = 0;
	
	
	for (; x[z] != y && x[z] != '\0'; z++)
	;

	if (x[z] == y)
	{
	return (x + z);
	}
	else
	{
		return (NULL);
	}
}

/**
 * c_strcspn - compute xegment of string.
 * @s: strings be searched.
 * @charset: string be used.
 * Return: indexx.
 */
int c_strcspn(char *x, char *charset)
{
	int count = 0, z;

	for (z= 0; x[z] != '\0'; z++)
	{
	if (b_strchr(charset, x[z]) != NULL)
	{
	break;
	}
	count++;
	}

	return (count);
}


/**
 * d_strcmp - to compare two different  string.
 * @s: 1'st string to be compared.
 * @c: 2'nd string to be compared.
 * Return: return 1 after strings are same.
 */
int d_strcmp(char *x, char *y)
{
	int z;

	for (z = 0; x[z] != '\0' && y[z] != '\0'; z++)
	{
	if (x[z] != y[z])
	{
	return (x[z] - y[z]);
	}
	}

	return (x[z] - y[z]);
}
