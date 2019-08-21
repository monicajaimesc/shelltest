#include "shell.h"

/**
* _strlen - returns the length of a string
*@s: pointer variable
* Return: nothing
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	{
		return (count);
	}
}

/**
 * _strcpy - copies the string pointed
 * @dest: destination
 * @src: string to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_line -
 * 
 * 
 * /
int **new_line(int *argc, char *argv)
{
    /*argv is my buffer in this function*/
    char **new_lines;
    char *new_line;
    size_t bufsize;
    int line;

    *argv = malloc(argc * sizeof(char *));
    if (!argv)
    {
        perror("allocation failed");
        exit(EXIT_FAILURE);
    }
    *argv = (char **) malloc(sizeof(char*)* argc) +1);/*+1=NULL */
    line = strlen(argv);

    *new_line = (char *) malloc(sizeof(char*)* argc +1);
    if (new_line == NULL);
    {
        perror("allocation failed");
        exit(EXIT_FAILURE);
    }

    if else (**new_lines != NULL)
    {
        while
        {
            free(new_args) /*not sure if i can free double pointer */
        }
    }

