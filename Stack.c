#include<stdio.h>
# define MAX 5
int stack[MAX],top,x;
void push();
void pop();
void traverse();
int main()
{
  int ch;
  while(1)
 {
  
  printf("\n 1.Push \n 2.Pop \n 3.Traverse \n 4.Exit");
  printf("Enter your choice :")	;
  scanf("%d",&ch);
  switch(ch)
  {
  	case 1:push();
  	       break;
  	case 2:pop();
  	       break;
  	case 3:traverse();
  	       break;
  	default: printf("Please enter valid choice");
  	   
  }
 }
}
void push()
{
	
	if(top==MAX-1)
	{
		printf("Stack is full");
	}
	else
	{
		printf("Enter a data");
	    scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else{
		x=stack[top];
		top--;
		printf("Data poped sucessfully");
	}
}
void traverse()
{
   if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		for(int i=top;i>0;i--)
		{
			printf("%d ",stack[i]);
		}
	}	
}