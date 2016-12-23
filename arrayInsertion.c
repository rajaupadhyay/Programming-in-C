#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int size;

	printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY:\n");
	scanf("%i",&size);

	int i;
	int array[100];

	printf("ENTER THE ELEMENTS:\n");
	for(i=0;i<size;++i)
	{
		scanf("%i",&array[i]);
	}

	int location,insertValue;
	printf("ENTER LOCATION OF NEW INSERTION:\n");
	scanf("%i",&location);

	printf("ENTER VALUE TO INSERT:\n");
	scanf("%i",&insertValue);

	location = location - 1;

	int temp;
	for(i=(size-1);i>(location-1);--i)
	{
		array[i+1] = array[i];
	}

	array[location] = insertValue;

	printf("AFTER INSERTION:\n");
	for(i=0;i<(size+1);++i)
	{
		printf("%i\n",array[i]);
	}




}