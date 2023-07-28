#include"main.h"
/**
 * string_copy - Copy strings.
 * @destination: The destination where the string will be copied to.
 * @source: The source string from where it is being copied.
 * Return: void
 */
void _copy(char *destination, const char *source)
{
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

/**
 * string_concatenate - Concatenates two strings.
 * @destination: The destination where the strings will be concatenated to.
 * @source: The source string that will be added to the destination.
 * Return: void
 */
void string_concatenate(char *destination, const char *source)
{
    int dest_len = _len(destination);
    int i = 0;

    while (source[i] != '\0')
    {
        destination[dest_len + i] = source[i];
        i++;
    }

    destination[dest_len + i] = '\0';
}
