#include <stdio.h>

int length (const char word[])
{
	int count=0;

	while(word[count] != '\0')
		++count;

	return count;

}

int findString (const char source[],const char temp[])
{
	int i,j,k,jump;
	int length (const char word[]);

	int length1,length2;

	length1 = length(source);
	length2 = length(temp);

	for(i=0;i<length1;++i)
	{
		if(source[i] == temp[0])
		{
			
			    for(j=0;j<length2;++j)
				    if(source[i] == temp[j] && j!= (length2 - 1))
						++i;
				    else if((source[i] == temp[j]) && j == (length2 - 1) )
						return i-(length2-1);
					else
						break;
					
					
        }

        
    }

    return -1;
}

int main()
{
	int length (const char word[]);
	int findString (const char source[],const char temp[]);
	int value;

	const char source[] = "rajais.theking";
	const char temp[] = ".";

	value = findString(source,temp);

	printf("\n\n\n%i\n\n\n",value);

	return 0;


}