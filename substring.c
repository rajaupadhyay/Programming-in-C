#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	char a[100];
	char b[100];

	printf("ENTER THE STRING:\n");
	scanf("%s", a);

	int pos,len;
	printf("ENTER POSITION AND LENGTH:\n");
	scanf("%i %i",&pos,&len);

	int i = pos;
	int j=0;
	while(i < (pos+len))
	{
		b[j] = a[i];
		++i;
		++j;
	}
	b[j] = '\0';
	printf("REQUIRED STRING IS : %s\n",b);


}