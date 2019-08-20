#include <stdio.h>
#include <string.h>

int main ()
{
	
	char *sep = "-/._,";
	char str[] = "probando-cositas/grandes.pequenas_colores,formas1";

	/*returns first token*/
	char* token = strtok(str, sep);
	
	/*keep printing tokens while delimiters are present in str[]*/
	while (token != NULL)	
	{
		printf("%s\n", token);
		token = strtok(NULL, sep);
	}
	return (0);
}
