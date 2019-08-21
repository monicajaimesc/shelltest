#include <stdio.h>
#include <unistd.h>

int main()
{
	char **argv;
	argv = malloc(2 * sizeof(char *));
	argv[0] = malloc(sizeof(char *));
	argv[0] = "/bin/ls";
	argv[1] = NULL;
	if (execve(argv[0], argv, NULL) == -1)
	{
   		 perror("Error:");
	}

	return (0);
}
