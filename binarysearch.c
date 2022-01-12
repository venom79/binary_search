#include <stdio.h>
int main()
{
	//defining variable
	int IndexCount,ElementNumber,LowerIndexValue,HighIndexValue,Array[50],SearchNumber,Middle;
	
	
	//getting element number
	printf("enter the number of elements: "); 
	scanf("%d",&ElementNumber);
	
	
	//getting numbers in array
	printf("enter the values: ");
	
	for(IndexCount=0;IndexCount<ElementNumber;IndexCount++)
	{
		scanf("%d",&Array[IndexCount]);
	}
	
	
	//seting lower and higher values to use binary serch
	LowerIndexValue = 0;
	HighIndexValue = ElementNumber-1;
	
	
	//getting the number to be search
	printf("enter the value to be searched: ");
	scanf("%d",&SearchNumber);
	
	
	//finding the number
	while(LowerIndexValue<=HighIndexValue)
	{
		Middle=(LowerIndexValue + HighIndexValue)/2;
		
		if(SearchNumber==Array[Middle])
		{
			printf("the number '%d' is found at index value %d",SearchNumber,Middle);
			break;
		}
		
		else if(SearchNumber < Array[Middle])
		{
			HighIndexValue = Middle - 1;
		}
		
		else
		{
			LowerIndexValue = Middle + 1;
		}
		
	}
	
	
	//setting a statement to print if cant find the number
	if(LowerIndexValue > HighIndexValue)
	{
		printf("the number '%d' doesn't exist in this array,sorry!",SearchNumber);
	}
	
	
	return 0;
}
	
