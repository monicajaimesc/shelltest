#include <stdio.h>

/*
 *av - program that prints all the arguments
 *
 *@argc: stores the total number of arguments
 *@argv: stores the array of string, including command name
 */

int main (int argc, char *argv[])
{
	int counter;
	for(counter=0; counter<argc; counter++)
		printf("argv[%d]: %s\n", counter, argv[counter]);
	return 0;
} 
