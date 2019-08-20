#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*first character in the buffer (address)*/
	char *buffer;
	size_t bufsize = 32;
	int characters;
	
	printf("maga~$");
	characters = getline(&buffer, &bufsize, stdin);
	printf("%d\n", characters);
	printf("%s\n", buffer);

	return(0);
}
