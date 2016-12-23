#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int size1,size2;
	int i;
	int array1[100];
	int array2[100];
	int final[200];

	printf("ENTER THE NUMBER OF ELEMENTS IN THE 1st ARRAY:\n");
	scanf("%i",&size1);

	printf("ENTER THE ELEMENTS:\n");
	for(i=0;i<size1;++i)
	{
		scanf("%i",&array1[i]);
	}

	printf("ENTER THE NUMBER OF ELEMENTS IN THE 2nd ARRAY:\n");
	scanf("%i",&size2);

	printf("ENTER THE ELEMENTS:\n");
	for(i=0;i<size2;++i)
	{
		scanf("%i",&array2[i]);
	}




	//MERGING THE 2 ARRAYS
	int x=0,y=0,j,k;
	for(i=0;i<(size1+size2);++i)
	{
		if(x > (size1-1))//EXHAUSTION OF 1st ARRAY
		{
			for(j=i;j<(size1+size2);++j)
			{
				final[j] = array2[y];
				++y;
			}
			break;
		}

		else if(y > (size2-1))//EXHAUSTION OF 2nd ARRAY
		{
			for(k=i;k<(size1+size2);++k)
			{
				final[k] = array1[x];
				++x;
			}
			break;
		}

		else if(array1[x] < array2[y])
		{
			final[i] = array1[x];
			++x;
		}

		else
		{
			final[i] = array2[y];
			++y;
		}


	}


	printf("MERGED AND SORTED ARRAY:\n");
	for(i=0;i<(size1+size2);++i)
	{
		printf("%i\n",final[i]);
	}








}