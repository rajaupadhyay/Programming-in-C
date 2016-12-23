#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[100];
	int array[26] = {0};

	printf("ENTER YOUR STRING:\n");
	gets(a);

	int i =0;

	while(a[i] != '\0')
	{
		if(a[i]>= 'a' && a[i]<= 'z')
		{
			++array[a[i]-'a'];
		}

		++i;
	}

	printf("CHARACTER\t\t\tCOUNT\n");
	for(i=0;i<26;++i)
	{
		if(array[i] != 0)
			printf("%c\t\t\t\t%i\n",i+'a',array[i]);
	}




}

