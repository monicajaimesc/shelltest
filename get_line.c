#include "shell.h"

/**
 *get_line - Reads an entire line from stream 
 *@lineptr:strores the address buffer of the line into fd
 *@size:store the address of the buffer from the stream read
 *@fd:file descriptor where to read input
 *Return: # characters (bytes) read, delimiter but not null bytes 
 */

ssize_t get_line(char **lineptr, size_t *size, int fd)
{
	
	
	ssize_t _read; /*bytes*/
	

	_read = read(*lineptr, *size, fd)
	
	if (_read == 0)
		return (-1);

	else if (_read == -1)
	{
		free(*lineptr);
		perror("input don't read it");
		exit(-1);
	}

	(*lineptr)[_read] = '\0';
	return (_read);
}
