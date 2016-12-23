#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[100];
	char output[100];
	char x;

	printf("ENTER STRING:\n");
	scanf("%s",input);

	int array[26] = {0};
	int len = strlen(input);

	int i;

	for(i=0;i<len;++i)
	{
		x = input[i] - 'a';
		array[x]++;
	}

	char y;
	int m;
	int z=0;
    int start =0;
	for(y='a';y <= 'z';++y)
	{
		if(array[z] != 0)
		{
			for(m=start;m<(start+array[z]);++m)
				output[m] = y;
		}

		start = start+array[z];
		++z;
	}

	printf("%s\n", output);

}