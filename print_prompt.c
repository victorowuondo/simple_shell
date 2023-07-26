#include "shell.h"

/**
 * prompts_read - prompts and displays inputs
 * @fd_check: byte no/c read by
 * Return:executers input
 */
char *prompts_read(ssize_t *fd_check)
{
	size_t buffer_size = 0;
	char *client_input = NULL;

	if (isatty(STDIN_FILENO))
	{
	printf("$ ");
	}

	int num_chars_read = getline(&client_input, &buffer_size, stdin);

	if (client_input == NULL)
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
	executers_input[num_chars_read - 1] = '\0';
	return (executers_input);
}
