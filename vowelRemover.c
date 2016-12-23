#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int vowel(char s);

int main()
{	
	char a[100];
	char b[100];

	printf("ENTER STRING:\n");
	scanf("%s", a);
	
	int i =0,j=0;
	while(a[i] != '\0')
	{
		if(vowel(a[i]) != 1)
		{
			b[j] = a[i];
			++j;
		}
			
		
	++i;
	}


	printf("%s\n",b);

}

int vowel(char s)
{
	switch(s)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			return 1;

		default:
			return 0;
	}

}