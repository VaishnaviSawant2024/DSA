//find the array type(Ebven,odd,mixed)
//Step 1 − Read the size of array at runtime.
//
//Step 2 − Input the array elements.
//
//Step 3 − If all the elements of the array are odd, Then, print "Odd".
//
//Step 4 − If all the elements of the array are even, Then, print "Even".
//
//Step 5 − Else, print "Mixed".

#include<stdio.h>
#define MAX 50
int main()
{
	int arr[MAX],i,n;
	int even=0,odd=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(arr[i]%2==0){
	    	even++;
		}	
		if(arr[i]%2==1){
			odd++;
		}
	}

	if(odd==n){
		printf("Array is odd");
	}
	else if(even==n){
		printf("Array is even");
	}
	else{
		printf("Array is mixed");
	}
	return 0;
}