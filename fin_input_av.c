#include <stdio.h>
/*
 *fin_input_av  - program that prints all arguments without using ac
 *Return: number and arguments passed
 */

int main (int ac, char **av)
{
	while (*av != NULL) /*argv gives the base address of array of char pointer*/
	{
		printf("%s\n", *(av));
		av++;
	}
	
	return 0;
}	
