#include<stdio.h>
void end_insert()
{
	struct node *ptr,*ptr1;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		print("Overflow");
		return;
	}
printf("enter info part for new node");
scanf("%d",&ptr->info);
ptr1=first;
while(ptr1->link!=NULL)
ptr1=ptr1->link;

ptr1->link=ptr;
ptr->link=NULL;
}
