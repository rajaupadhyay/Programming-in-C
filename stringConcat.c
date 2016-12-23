#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


void concat(char *a, char *b);

int main()
{
	char a[100];
	char b[100];

	printf("ENTER THE 1st STRING:\n");
	scanf("%s", a);


	printf("ENTER THE 2nd STRING:\n");
	scanf("%s", b);


	concat(a,b);

	printf("%s\n",a);

}

void concat(char *a, char *b)
{
	while(*a != '\0')
	{
		++a;
	}

	while(*b != '\0')
	{
		*a = *b;
		++a;
		++b;
	}

	*a = '\0';
}