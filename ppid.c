#include <stdio.h>
#include <unistd.h>
#include  <sys/types.h>
/*
 *get-ppid - program that prints the PID fo the parent process
 *Return: the process id of the parent function
 */

int main()
{
	pid_t p_process_id;/*variable to store parent function's process id*/
	
	p_process_id = getppid();

	printf("%d\n",p_process_id);

	return 0;
}


