#include "shell.h"

loop(void)
{
	char *line;
	char **args;
	int status;

	do
	{
		printf("maga~$");
		line = lsh_read_line();
		args = lsh_split_line(line);
		status = lsh_execute(args);

		free(line);
		free(args);
	}
 	while (status);
}
