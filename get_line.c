#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*first character in the buffer (address)*/
/*If *lineptr is NULL, then getline() will allocate a buffer for storing the line*/
	char *line = NULL;
	size_t bufsize = 0;
	int characters;
	
	printf("maga~$");
	characters = getline(&line, &bufsize, stdin);/*allocate a buffer for us*/
	printf("%d\n", characters);
	printf("%s\n", line);

	free(line);
	exit(EXIT_SUCCESS);
}
