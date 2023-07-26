#ifndef MAIN_H
#define MAIN_H


#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <sys/wait.h>

#define MAX_ARGS 15
#define BUFFER_SIZE 1024

	void print_error(char **av, char *err);
	void free_array(char **argv);
	void *receive_argv(char *agc,int *argv);
	int t_len(const char *str);
	void l_copy(char *t, const char *fr);
	int handle_env_command(char *args);
	void p_cat(char *txt_ad, const char *txt);
	void l_copy(char *t, const char *fr);
	int _errputs(char *tr);
	char *m_getenv(const char *ident);
	char *p_strtok(char *tng, const char *delim);
	extern char *environ;
	char *m_strdup(const char *tr);
 	char *_getline(void);
 	int main(int ac, char **argv);
	char *get_path(char *first_command);
	char *prompts_read(ssize_t *fd_check);
	void exits_shell(char **input_argv, int execution_status);
	int a_atoi(char *m);
	char *b_strchr(char *x, char y);
	int execute_command(char **receive_argv);
	int c_strcspn(char *x, char *charset);
	int d_strcmp(char *x, char *y);

	char *executers_input(void);

	typedef struct data_shell
	{
	char **_environ;
	int status;
	} 
	data_shell;


#endif
