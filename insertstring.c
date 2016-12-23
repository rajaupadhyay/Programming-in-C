#include <stdio.h>

int length (const char word[])
{
	int count=0;

	while(word[count] != '\0')
		++count;

	return count;

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
    	printf("%c",final[i]);
    

    printf("\n");

}

int main()
{
   void insertString (char phrase[],char insert[],int start );
   char phrase[] = "the wrong son";
   char insert[] = "per";

   insertString(phrase,insert,10);

   return 0;


}
