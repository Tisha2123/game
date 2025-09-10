#include<stdio.h>
# define size 5


	int a[50];
	int top=-1;
	void push();
	void pop();
	void peek();
	void display();
int main()
{
int a[50];
	int choice;
	printf("stack implimentation:");
	printf("1)push\n2)pop\n3)display\n");
	printf("enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			
		 push();
		 break;
		 case 2:
		   pop();
		  break;
		 case 3:
		 display();
		 	 break;
		 	 default:
			  {
		 	 	printf("invalid input:");
				break;
			  } 
		 	 
	}
	void push()
	{
	
		int x;
		int top=-1;
		if(top== size-1)
		{
			printf("stack is overflow:");
		}
		else
		{
		
		printf("enter the elements:");
		top=top+1;
		a[top]=x;
		}
		
	}
	void pop()
	{
		if(top= size-1)
		{
			printf("stack overflow:");}
			else
			{
				printf("popped element %d :",a[top]);
		        top=top-1;
			}
		
		
		
	}

	return 0;
}
