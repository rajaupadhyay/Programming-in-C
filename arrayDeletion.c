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

	int deleteLocation;
	printf("ENTER LOCATION OF ELEMENT TO BE DELETED:\n");
	scanf("%i",&deleteLocation);

	--deleteLocation;

	for(i=deleteLocation;i<size;++i)
	{
		array[i] = array[i+1];
	}

	printf("ARRAY AFTER DELETION:\n");
	for(i=0;i<(size-1);++i)
	{
		printf("%i\n",array[i]);
	}


}