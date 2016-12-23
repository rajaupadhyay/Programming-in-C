#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	char a[100];
	char b[100];

	printf("ENTER 1st STRING:\n");
	scanf("%s", a);

	printf("ENTER SUBSEQUENCE TO CHECK:\n");
	scanf("%s", b);

	int len = strlen(a);
	int stopper = strlen(b);

	int i;
	int j=0;
	int x = 1;

	for(i=0;i<len;++i)
	{	
		if(x == stopper)
		{
			printf("YES\n");
			break;
		}

		if(a[i] == b[j])
		{
			++j;
			++x;
		}


	}

}