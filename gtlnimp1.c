#include"main.h"

/**
 * free_string_array - Frees a dynamically allocated array of strings.
 * @str_array: The array of strings to be freed.
 */
void free_array(char **str_arr)
{
    char **temp = str_arr;

    
    while (*temp != NULL)
    {
        free(*temp);
        *temp = NULL;
        temp++;
    }


    free(str_arr);
}

/**
 * string_length - Counts the length of a string.
 * @str: The input string whose length is to be counted.
 * Return: The length of the string.
 */
int s_len(const char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    return (len);
}
