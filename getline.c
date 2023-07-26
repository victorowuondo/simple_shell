#include "shell.h"

/**
 * _getline - Read a line of input from standard input
 * Return: The line of input (without the newline character) or NULL on failure
 */
char *_getline(void)
{
	static char buffer[BUFFER_SIZE];
	static size_t buffer_length = 0;
	static size_t position = 0;

	char *row = NULL;
	size_t newrow_index = 0;
	size_t row_length = 0;
	size_t size_length = 0;

	while (1)
	{
	if (position >= buffer_length)
	{
	buffer_length = fread(buffer, 1, BUFFER_SIZE, stdin);
	if (buffer_length == 0)
	break;
	position = 0;
	}

	newrow_index = position;
	while (newrow_index < buffer_length && buffer[newrow_index] != '\n')
	newrow_index++;
	size_length = row_length - position;

	row = (char *)realloc(row, (row_length + size_length + 1) * sizeof(char));
	if (row == NULL)
	return (NULL);

	for (size_t y = 0; y < size_length; y++)
	row[row_length + y] = buffer[position + y];
	row_length += size_length;

	position = newrow_index + 1;
	if (buffer[newrow_index] == '\n')
	{
	row[row_length] = '\0';
	position++;
	break;
	}
	}

	return (row);
}
