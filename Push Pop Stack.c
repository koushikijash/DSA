#include<stdio.h>
#include <stdlib.h>
#define n 10
	void push(int);
	void pop();
	void display();
	
	int top=-1;
	int stack[n];
int main()
{
    int top=-1;
     int choice,item;
  int i;
        while(1)
        {
                printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display all stack elements\n");
                printf("4.Exit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
            
                switch(choice)
                {
                 case 1 :
                 	   {
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                         }
                        break;
                 case 2:
                        pop();
                        break;
                 case 3:
                        display();
                        break;
                 case 4:
                        return 0;
                        break;
                        
                 default:
                        printf("\nWrong choice\n");
                }
    }

        return 0;

}


void push(int data)
{
	
	if(top==n-1) //n=size
	{
	printf("Stack Overflow");
	return;
	}
	else
	{
	top=top+1;
	stack[top]=data;
	printf("Element in the stack ");
	  display();
	}	
}

void pop()
{
	
	if(top==-1) //n=size
	{
	printf("Stack Underflow");
	return;
	}
	else
	{
	stack[top]='\0';
	top=top-1;
	printf("Element in the stack after POP ");
	  display();
	}		
}



void display()
{
	int i;
	for(i=0;i<=top;i++)
	printf("%d\n",stack[i]);
		
}




