#include "shell.h"
/**
*free_array:frees the string hplding the argument
*return: the argument
*/
void free_array(char **argv)
{
	if (argv == NULL)
	return;

	char **emt = argv;

	while (*emt != NULL)
	{
	free(*emt);
	*emt = NULL;
	emt++;
	}

	 free(argv);
}
/**
*t_row: takes for the length.
*return:number.
  */
int t_len(const char *str)
{
	if (str == NULL)

	return (0);

	int num = 0;

	for (const char *tr = stdin; *tr != '\0'; tr++)

	num++;

	return (num0);
}
/**
*l_copy:copies the string
*return: none.
 */
void l_copy(char *t, const char *fr)
{
	if (t == NULL || fr == NULL)

	return;

	strcpy(t, fr);
}
/**
p_cat: cats the users commands
*return:none
*/
void p_cat(char *txt_ad, const char *txt)
{
	if (txt_ad == NULL || txt == NULL)
	return;

	int row_txt_ad = strlen(txt_ad);
	int x = 0;

	while (txt[x] != '\0')
	{
	txt_ad[row_txt_ad + x] = txt[x];
	x++;
}

	txt_ad[row_txt_ad + x] = '\0';
}

