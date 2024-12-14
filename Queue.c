#include <stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;
int i,x;
void enqueue();
void dequeue();
void traverse();
int main()
{
  int ch;
  while(1)
 {
  
  printf("\n 1.Enqueue \n 2.Dequeue \n 3.Traverse \n 4.Exit");
  printf("Enter your choice :")	;
  scanf("%d",&ch);
  switch(ch)
  {
  	case 1:enqueue();
  	       break;
  	case 2:dequeue();
  	       break;
  	case 3:traverse();
  	       break;
  	case 4:exit(1);
  	       break;
  	default: printf("Please enter valid choice");
  	   
  }
 }
}
void enqueue()
{
	if(rear==MAX-1)
	{
	  printf("Queue is Full");		
	}
	else{
		printf("Enter a data");
	    scanf("%d",&x);
		if(rear==-1)
		{
			rear=front=0;
			
			queue[rear]=x;
		}
		else{
			rear=rear+1;
			queue[rear]=x;
		}
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		x=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else{
		
		front++;
		printf("data deleted successfully");
	}
	}
}
void traverse()
{
	
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
	
	for(i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
		
	}
}
}