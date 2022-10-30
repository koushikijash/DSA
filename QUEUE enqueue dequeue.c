#include<stdio.h>
#include <stdlib.h>
#define n 10
	void enqueue(int);
	void dequeue();
	void display();
	int front=-1;
	int rear=-1;
	
	int queue[n];
int main()
{
    int front=-1;
	int rear=-1;
     int choice,item;
  int i;
        while(1)
        {
                printf("\n1.ENQUEUE : insert in rear\n");
                printf("2.DEQUEUE : delete from front\n");
                printf("3.Display all s	QUEUE elements\n");
                printf("4.Exit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                 	   {
                        printf("\nEnter the Data to be added in the rear : ");
                        scanf("%d",&item);
                       enqueue(item);
                         }
                        break;
                 case 2:
                        dequeue();
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
void enqueue(int data)
{
	if(rear==n-1) //n=size
	{
	printf("QUEUE Overflow");
	return;
	}
   else if(front==-1)
	{
		front=front+1;
		rear=rear+1;
		queue[rear]=data;
	printf("Element in the queue ");
	  display();
	}
	else
	{
	rear=rear+1;
	queue[rear]=data;
	printf("Element in the queue ");
	  display();
	}
}
void dequeue()
{
	if(front==-1 || front>=rear) //n=size
	{
	printf("Stack Underflow");
	return;
	}
	else
	{
	queue[front]='\0';
	front=front+1;
	printf("Element in the stack after delete ");
	  display();
	}		
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d\n",queue[i]);		
}
