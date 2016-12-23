#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char string[100];

	printf("ENTER THE STRING\n");
	scanf("%s", string);

	int l=0;
	int r = strlen(string);
	
	const int x = strlen(string);
	char buffer;

	for(l=0,r =x-1;r>=l;++l,--r)
	{
		buffer = string[l];
		string[l] = string[r];
		string[r] = buffer;
	}

	string[x] = '\0';
	

	printf("REVERSED STRING IS: %s\n",string);

}