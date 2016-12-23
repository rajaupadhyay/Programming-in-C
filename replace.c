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


void insertString (char phrase[],char insert[],int start )
{
	int length (const char word[]);
    int length1,length2,i,j;

    length1 = length(phrase);
    length2 = length(insert);
    printf("%i\n%i\n",length1,length2);

    char final[81];
    
    j = 0;
    for(i=start;i<(start+length2);++i){
    	
    	final[i] = insert[j];
         ++j;
     }

    for(i=start;i<(start+length2);++i)
    	printf("%c",final[i]);
        printf("\n");


    for(i=0;i<length1;++i)
    {
    	if(i<start)
    		final[i] = phrase[i];

    	else if(i>=start )
    	final[i+length2] = phrase[i];	 
    }

    for(i=0;i<(length1+length2);++i)
    	if(final[i] != '0')
    	printf("%c",final[i]);
    

    printf("\n");

}


void replaceString (char strand[],char wordReplace[],char wordInsert[])
{
	int length (const char word[]);
	int findString (const char source[],const char temp[]);
	void removeString (char phrase[],int start,int count);
	void insertString (char phrase[],char insert[],int start );
	int startPoint;

	startPoint = findString(strand,wordReplace);

	removeString(strand,startPoint,length(wordReplace));

	insertString(strand,wordInsert,startPoint);

}


int main()
{   int length (const char word[]);
	int findString (const char source[],const char temp[]);
	void removeString (char phrase[],int start,int count);
	void insertString (char phrase[],char insert[],int start );
	void replaceString (char strand[],char wordReplace[],char wordInsert[]);

	char strand[] = "Raja is awesome man";
	char wordReplace[] = "man";
	char wordInsert[] = "boy";

	replaceString(strand,wordReplace,wordInsert);

	return 0;
}