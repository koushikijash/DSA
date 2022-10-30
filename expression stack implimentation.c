#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define n 10
	void push(char);
	char pop();
	void display();
	int top=-1;
	char stack[n];
	char s[50]; //the expression as the STRING 
	int i;
	
int main()
{
    int top=-1;
     int i,valid=1;
     char temp;
  
 		 printf("Enter the expression : ");
 			 gets(s);
 	  for(i=0;i<=strlen(s)-1;i++)
  			      {
		  			if(s[i]=='('||s[i]=='{'||s[i]=='[')
		  				 push(s[i]);
		  			 
		  			 	if(s[i]==')'||s[i]=='}'||s[i]==']')
		  			 	{
						  
		  					 if(top==-1) //stack enmpty but ) } ] incoming
		  			 				valid=0;
		  					 else
		  				 		{
		  				     	temp=pop(); //after pop character store in temp
		  				    		if(s[i]==')' && ( temp=='{'|| temp=='[' ))
		  				 			     valid=0;
		  				 			if(s[i]=='}' && (temp=='('|| temp=='[' ))
		  				     			 valid=0;
		  				     		if(s[i]==']' && ( temp=='('|| temp=='{' ))
		  				 				valid=0;
		  				         }
		  				}
		            }

 		 if(top>=0) //stack not empty
 		 
 		 valid=0;
 		 
 		 if(valid==1)
 		 
 		 	printf("\n This is a Valid expression... \n ");

				else 
	printf("\n This is an INValid expression... \n ");
  			 
        return 0;

}


void push(char data)
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

//	  display();
	}	
}

char pop()
{
	
	if(top==-1) //n=size
	{
	printf("Stack Underflow");
	return;
	}
	else
	{
    return stack[top--];
	}		
}



//void display()
//{
//	int i;
//	for(i=0;i<=top;i++)
//	printf("%d\n",stack[i]);
//	
//		for(i=0;i<strlen(s)-1;i++)
//	printf("%d\n",s[i]);
//	
//		
//}




