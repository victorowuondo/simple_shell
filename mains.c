#include "shell.h"

/**
 * main - Shell cloned programs.
 * @ac: argument count.
 * @argv: Array pointer to string.
 * Return: 0 on success.
 */
int main(int ac, char **argv)
{
	char *user_input, **receive_argv;
	data_shell shell_data;
	int x, execution_status = 0;
	ssize_t fd_check;

	shell_data_environ = environ;

	(void)argv;
	(void)ac;

	while (1)
	{

	executers_input = NULL;
	fd_check = 0;
	executers_input = prompts_read(&fd_check);


	receive_argv = tokenization(executers_input, receive_argv, fd_check);


	if (receive_argv[0] == NULL)
	{

	free(executers_input);
	free_array(receive_argv);
	continue;
	}

	if (d_strcmp(receive_argv[0], "env") == 0)
	{
	free(executers_input);
	_env(&shell_data);
	free_array(receive_argv);
	continue;
	}
	if (d_strcmp(receive_argv[0], "exit") == 0)
	{
	free(user_input);
	exits_shell(receive_argv, execution_status);
	free_array(receive_argv);
	continue;
	}

	x = handle_env_command(receive_argv);
	if (x != 0)
	{
	free(executers_input);
	free_array(receive_argv);
	continue;
	}
	execution_status = execute_command(receive_argv);
	if (execution_status == 1)
	print_error(receive_argv, "not found\n");

	free(executers_input);
	free_array(receive_argv);
	}
	return (0);

}
