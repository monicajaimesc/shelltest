#include "shell.h"

/**
 *main - The shell program entry point.  
 *@argc: Integer argument counter.
 *@argv: Arguments passed vector.
 *@env: Environment for the program.
 *Return: Integer result, 0 for sucess besides is an error. 
 */


int main (int argc, char *argv[], char *env)
{
	char *line = NULL;	/*buffer */
	size_t bufsize = 0;
	int characters = 0;
	pid_t pid;

  /*Load config files, if any*/

  /*Run command loop*/
	while (EOF)/*end of a file*/
	{
		printf("maga~$");
	/* return number of characters stdin */
		fflush(stdin);
	/*allocate a buffer for us*/	
		characters = getline (&line, &bufsize, stdin);
		if (characters == -1)
		{
			perror ("input don't read it");
		}
	   
		else
		{
			argc = ac_counter(line);
			line = split_line(line):
			argv = new_argv(argc, line);
		
			if (argc != 0)
			{
				pid = fork(); /*new process started and duplicate it*/
			
				if (pid == 0) /*return 0 is a child process*/
				{
				/*into child process*/
		/*run the command given by user*/
					if (execv(argv[0], argv, NULL) == -1)
						perror("Error\n");
						exit (EXIT_FAILURE);
				}
				else
				{
	/*fork sucessfull, parent process, child execute process, parent wait*/
					wait(NULL);
				}
			}
		}
	}
	free(line);
	return (0);
}

					



	} 

  /*Perform any shutdown/cleanup*/.

  return EXIT_SUCCESS;
}
