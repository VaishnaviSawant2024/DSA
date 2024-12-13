//find a frequency of given no.
#include<stdio.h>
#define MAX 50
int main()
{ 
	int arr[MAX],n,i;
	int num,count;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter number to find the occurance");
	scanf("%d",&num);
	count=0;
	for(i=0;i<n;i++)
	{
	if(arr[i]==num){
	 count++;	
	}
   }
printf("Occurance of %d is:%d\n",num,count);
return 0;
}