#include <stdio.h>

int main()
{
	int vals,i,x,j;

	scanf("%i",&vals);
	int buffer=1;
	int buffVal=1;
	unsigned long long int result=1;


	for(i=0;i<vals;++i)
	{
		scanf("%i",&x);

		if(x>buffer)
		{
			result = buffVal;
			for(j=x;j>buffer;--j)
			{
				result *= j;
			}

			buffer = x;
			buffVal = result;
		}

		else
		{
			result = 1;
			for(j=1;j<=x;++j)
			{
			result *= j;
			}
		}

		printf("%llu\n",result);
		
	}

}