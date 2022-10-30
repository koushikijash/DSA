#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct binary
{
	int data;
	struct binary *left;
	struct binary *right;
}node;

node *get_node()
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
insert(node *root,node *new)
{
	char ch;
	printf("insert in left or right of %d", root->data);
	ch=getch();
	if(ch=='R'||ch=='r')
	{
		if(root->right==null)
		 root->right=new;
		else
		 insert(root->right,new);
	}
	else
		{
			if(root->left=null)
			root->left=new;
			else
			inser(root->left,new);
		}
}
void main()
{
	node *new,*root;
	char ans;
	root=NULL;
	do{
		new=get_node();
		printf("enter the element");
		scanf("%d",&new->data);
		if(root==NULL)
		root=new;
		else
		insert(root,new);
	printf("do you want to enter more elemet?(y/n)");
	ans=getch();
	}while(ans=='Y'||'y')
	
}
