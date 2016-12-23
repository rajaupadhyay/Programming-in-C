#include <stdio.h>
#include <math.h>


// FINDING THE LENGTH OF THE STRING
int length ( char word[])
{
	int count=0;

	while(word[count] != '\0')
		++count;

	return count;

}



int strToInt ( char string[])
{
	int i,intValue,result=0;

	if(string[0] == '-')
	{
		for(i=1;string[i]>= '0' && string[i] <='9';++i)
		{
			intValue = string[i] -'0' ;
			result =result*10+intValue;
		}

		return (result*-1);
    }

    else if(string[0] != '-')
    {
    	for(i=0;string[i]>= '0' && string[i] <='9';++i)
		{
			intValue = string[i] - '0' ;
			result =result*10+intValue;
		}

	}	
    return (result);
}


//FINDING THE POSTION OF THE POINT
int findString ( char source[], char temp[])
{
	int i,j,k;
	int length ( char word[]);

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


//REMOVING THE POINT AND CONVERTING TO AN INTEGER STRING
int removeString (char phrase[],int start,int count)
{
	int findString ( char source[], char temp[]);
	int strToInt ( char string[]);
	int i,number,j;
	int length ( char word[]);
	int m,intValue,result=0;
	float final;

    int where;
    where = findString(phrase,".");
   


    number = length(phrase);

char new[81];
int x;

    for(j=0;j<where;++j)
    {
    	
    	new[j] = phrase[j];
    }

    for(j=where;j<number;++j)
    {
    	new[j] = phrase[j+1];
    }



    final = strToInt(new);
   
    float answer;
    int value;
    int cow;
    cow = number-where-1;
    value = pow(10,cow);
    
    answer = final/value;
    printf("%.5f",answer);

    
    return 0;
    
}

    
    




int main()
{
	int length ( char word[]);
	int findString ( char source[], char temp[]);
	int removeString (char phrase[],int start,int count);

char number[] = "382.679";

	int lengthOfString;
	lengthOfString = length(number);

	int position;
	position = findString(number,".");

	removeString(number,position,1);



	return 0;


}















