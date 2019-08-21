#include "shell.h"
/**
 * split_line - split the line in words
 *@line: input writed by user 
 *Return: words splited
 */

char **split_line (char *line)
{
	int bufsize = 64, position = 0;
	char **tokens;
	char *token;

	tokens = malloc(bufsize * sizeof(char *));
	if (!tokens)
	{
		perror("hsh: allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = _strtok(line, " \t\r\n\a");
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= bufsize)
		{
			bufsize += 64;
			tokens = realloc(tokens, bufsize * sizeof(char *));
			if (!tokens)
			{
				perror("hsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = _strtok(NULL, " \t\r\n\a");
	}
	tokens[position] = NULL;
	return (tokens);
}	
