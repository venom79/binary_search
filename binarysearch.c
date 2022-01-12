#include <stdio.h>
int main()
{
	int i,n,low,high,a[20],x,mid;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("enter the values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	low = 0;
	high = n-1;
	printf("enter the value to be serched: ");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(x==a[mid])
		{
			printf("the number '%d' is found at index value %d",x,mid);
			break;
		}
		else if(x<a[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	if(low>high)
	{
		printf("the number '%d' doesn't exist in this array,sorry!",x);
	}
	return 0;
}
	
