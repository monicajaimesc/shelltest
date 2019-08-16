#include <stdio.h>
#include <unistd.h>
#include  <sys/types.h>
/*
 *get-pid - program to get the PID (system call)
 *Return: the process ID of the calling process
 */

int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("%u\n", my_pid);
    return (0);
}

