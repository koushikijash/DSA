#include<stdio.h>
void main()
//TRAVERSE 
{
	int a[10],n;
		int i,lb=0,ub=0,item;
			printf("enter the number of elements of the array 10 or >10 :");
				scanf("%d",&n);
				
  while(1)
    {

	printf("enter the elements of the array");
	scanf("%d",&a[n]);
	 
     if(ub==n)
     //n=size
     {
    	printf("Array is Overflow, element can't be inserted'");
    	break;
	 }

	 else
	 {
	 ub=ub+1;
	 a[ub]=item;
	 }

}
	 printf("Current Array elements are :\t");
	 for(i=lb;i<=ub;i++)
	printf("%d\t",a[i]);
	
}
