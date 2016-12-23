#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[100];
	char b[100];

	printf("ENTER THE FIRST STRING:\n");
	scanf("%s", a);

	printf("ENTER THE SECOND STRING:\n");
	scanf("%s", b);

	int aLen = strlen(a);
	int bLen = strlen(b);

	int len = aLen > bLen ? aLen : bLen ;
	
	int flag = 0;
	int i=0,j=0,k=0;
	while(k != len)
	{
		if(a[i] != b[j])
		{
			flag = 1;
			break;
		}
		++i;
		++j;
		++k;
	}

	if(flag == 1)
		printf("NOT EQUAL\n");

	else
		printf("EQUAL\n");
}