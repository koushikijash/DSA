#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int info;
    struct node* link;
};
 
int main()
{
    struct node* firstptr;
    struct node* secondptr;
    struct node* thirdptr;
 
    firstptr = (struct node*)malloc(sizeof(struct node));
    secondptr = (struct node*)malloc(sizeof(struct node));
    thirdptr = (struct node*)malloc(sizeof(struct node));
 
   firstptr ->info = 1; 
    firstptr->link = secondptr; 

    secondptr ->info = 2;
   secondptr ->link = thirdptr;
 
    thirdptr->info = 3; 
    thirdptr->link = '\0';
   
    return 0;
}

