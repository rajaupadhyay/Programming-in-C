#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int size,buffer;

	printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY:\n");
	scanf("%i",&size);

	int i;
	int *array = (int *) malloc(sizeof(int)*size);

	printf("ENTER THE ELEMENTS:\n");
	for(i=0;i<size;++i)
	{
		scanf("%i",&buffer);
		array[i] = buffer;
	}

	int left=0;
	int right = size - 1;
	int x;

	int val;
	printf("ENTER SEARCH VALUE:\n");
	scanf("%i",&val);
	int flag=0;

	while(flag != 1)
	{
		x = left + ((right-left)/2);

		if(val == array[x]){
			printf("FOUND NUMBER AT POSITION %i\n",x);
			flag = 1;

		}

		else if( (x == left && array[left] != val) || (x == right && array[right] != val))
		{
			printf("NOT FOUND.\n");
			flag = 1;
		}

		else if( left == right)
		{
			printf("NOT FOUND.\n");
			flag = 1;

		}

		else if(val < array[x])
		{
			left = left;
			right = x-1;
		}

		else if(val > array[x])
		{
			left = x+1;
			right = right;
		}

		
	}


}