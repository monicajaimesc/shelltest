#include <stdio.h>
/*find_input - how to inform a program about where to find its input and write results
 *@ac: is the number of items in av 
 *@av: is a NULL terminated array of strings
 */

int main(int ac, char **av)
{
	/*av[0] usually contains the name used to invoke the current program*/
	/*av[1] is the first argument of the program*/
	/*av[2] the second, and so on*/
	
	int ndx = 0;
	int argc = ac;

	ndx = av[];	

	while (ndx < argc)
	{
		printf("argv[%d] --> %s\n", ndx, argv[ndx]);
	}
	printf("av[ac] = %s\n", av[ac]);
}

