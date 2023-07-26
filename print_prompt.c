#include "shell.h"

/**
 * prompts_read - prompts and displays inputs
 * @fd_check: byte no/c read by
 * Return:executers input
 */
char *prompts_read(ssize_t *fd_check)
{
	size_t buffer_size = 0;
	char *executers_input  = NULL;
	int num_chars_read = getline(&executers_input, &buffer_size, stdin);
	size_t newline_pos;

	if (isatty(STDIN_FILENO))
	{
	printf("$ ");
	}


	if (executers_input == NULL)
	{

	if (isatty(STDIN_FILENO))
	printf("\n");
	exit(EXIT_SUCCESS);
	}

	*fd_check = num_chars_read - 1;

	if (*fd_check == 0 && isatty(STDIN_FILENO))
	{
	free(client_input);
	return (prompts_read(fd_check));
	}
	size_t newline_pos = strcspn(client_input, "\n");
	client_input[newline_pos] = '\0';

	return (executers_input);
}
