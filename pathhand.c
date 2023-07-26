#include "shell.h"

/**
 * get_path - get  path  of command\s.
 * @first_command: user's input
 * Return:  NULL 
 */
char *get_path(char *first_command)
{

	char *cmd_path = m_getenv("PATH");
	if (cmd_path == NULL || first_command == NULL)
	return NULL;

	char *delimiter = ":";
	char *parse_token = p_strtok(cmd_path, delimiter);

	while (parse_token != NULL)
	{
	int path_len = t_len(parse_token) + t_len(first_command) + 2;
	char *path_to_file = malloc(path_len);
	if (path_to_file == NULL)
	return NULL;

	l_copy(path_to_file, parse_token);
	p_cat(path_to_file, "/");
	p_cat(path_to_file, first_command);

	if (stat(path_to_file, &path_len) == 0)
	{
	free(cmd_path);
	return path_to_file;
	}

	free(path_to_file);
	parse_token = p_strtok(NULL, delimiter);
	}

	free(cmd_path);
	return NULL;
}
