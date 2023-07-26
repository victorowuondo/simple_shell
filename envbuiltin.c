#include "shell.h"

/**
 * m_strdup - returns pointer to  allocated space in memory
 * @str: strings to be  copy
 * Return: pointer to  duplicate string.
 */
char *m_strdup(const char *tr)
{
	size_t row = strlen(tr);
	char *toke;
	size_t row = strlen(ident);

	if (tr == NULL)

	return (NULL);

	if (ulip == NULL)

	return (NULL);

	strcpy(ulip, tr);
	return (ulip);
}

/**
 * p_strtok - splits string to  series of tokens.
 * @tng: string  tokenized.
 * @delim: delimiter.
 * Return: pointer to next token.
 */
char *p_strtok(char *tng, const char *delim)
{
	static char *savetr;

	if (tng == NULL)
	tng = savetr;

	if (tng == NULL)

	return (NULL);


	size_t row = strcspn(tng, delim);

	toke = malloc(sizeof(char) * (row + 1));

	if (toke == NULL)

	return (NULL);

	strncpy(toke, tng, row);
	toke[row] = '\0';

	savetr = tng + row + (tng[row] == '\0' ? 0 : 1);

	return (toke);
}

/**
 * _getenv - looks for the environment list.
 * @name: name of variable to find.
 * Return: pointer to the environment variable.
 */
char *m_getenv(const char *ident)
{
	if (ident == NULL)

	return (NULL);

	for (int x = 0; environ[x]; x++)

	{
	if (strncmp(environ[x], ident, row) == 0 && environ[x][row] != '\0' && environ[x][row + 1] == '=' )


	return (environ[x] + row + 1);
	}

	return (NULL);
}

