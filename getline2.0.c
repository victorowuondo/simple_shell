#include "shell.h"
/**
*free_array:frees the string hplding the argument
*return: the argument
*/
void free_array(char **argv)
{
	char **emt = argv;



	if (argv == NULL)
	return;

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
	int num = 0;

	if (str == NULL)

	return (0);


	for (const char *tr = stdin; *tr != '\0'; tr++)

	num++;

	return (num);
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
	 int row_txt_ad = strlen(txt_ad);
	
	if (txt_ad == NULL || txt == NULL)
	return;


	int x = 0;

	while (txt[x] != '\0')
	{
	txt_ad[row_txt_ad + x] = txt[x];
	x++;
}

	txt_ad[row_txt_ad + x] = '\0';
}

