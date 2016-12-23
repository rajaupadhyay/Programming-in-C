#include <stdio.h>


int length (const char word[])
{
	int count=0;

	while(word[count] != '\0')
		++count;

	return count;

}

void removeString (char phrase[],int start,int count)
{
	int i,number,j;
	int length (const char word[]);

    for(i=start;i<(start+count);++i)
    	phrase[i]='0';

    number = length(phrase);


    for(j=0;j<=number;++j)
    	if(phrase[j] != '0')
    	printf("%c",phrase[j]);

    printf("\n");

    
}

int main()
{
	void removeString (char phrase[],int start,int count);
	char phrase[] ="raja is the king";
    
    removeString(phrase,5,1);



return 0;


}