#include "shell.h"

/**
 * @execution_status:status exiting shell
 * exits_shell - xit shell.
 * @input_argv: input entered as  array strings.
 * Return: nothing
 */
void exits_shell(char **input_argv, int execution_status)
{
	if (input_argv[1] != NULL)
	{
	int arg = a_atoi(input_argv[1]);

	if (arg < 0)
	{
	print_error(input_argv, " INCORRECT ARGUMENTS: ");
	_errputs(input_argv[1]);
	_errputs("\n");
	return;
	}
	else if (receive_argv[2] != NULL)
	{
	_errputs("$: exeeded no of arguments\n");
	return;
	}
	else
	{
	free_array(input_argv);
	exit(arg);
	}
	}
	else
	{
	free_array(input_argv);
	exit(execution_status);
	}
}

