// LINKED list all delete insert
#include <stdio.h>

// Linked List Node
struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;



// Driver Code
int main()
{
	int choice;
	while (1) {

		printf("\n\t1 The linked list\n");
		printf("\t2 For insertion at"
			" starting\n");
		printf("\t3 For insertion at"
			" end\n");
		printf("\t4 For insertion at "
			"any position\n");
		printf("\t5 For deletion of "
			"first element\n");
		printf("\t6 For deletion of "
			"last element\n");
		printf("\t7 For deletion of "
			"element at any position\n");
		printf("\t8 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			traverse();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
			deleteFirst();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deletePosition();
			break;
		case 8:
			exit(1);
			break;
		default:
			printf("WRONG Choice\n");
		}
	}
	return 0;
}






//traverse the linked list
void traverse()
{
	struct node* temp;

	//empty
	if (start == NULL)
		printf("\n empty\n");

	// Else print the LL
	else {
		temp = start;
		while (temp != NULL) {
			printf("%d-->",
				temp->info);
			temp = temp->link;
		}
		
		printf("NULL\n");
	}
}


// insert at the front
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->info = data;

	// Pointer of temp will be
	// assigned to start
	temp->link = start;
	start = temp;
}

//insert at the end of

void insertAtEnd()
{
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));

	// Enter the number
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);

	// Changes links
	temp->link = 0;
	temp->info = data;
	head = start;
	while (head->link != NULL) {
		head = head->link;
	}
	head->link = temp;
}

// insert at any specified

void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));

	// Enter the position and data
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);

	// Change Links
	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}

// delete from the front

void deleteFirst()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->link;
		free(temp);
	}
}

// delete from the end

void deleteEnd()
{
	struct node *temp, *prevnode;
	if (start == NULL)
		printf("\nList is Empty\n");
	else {
		temp = start;
		while (temp->link != 0) {
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = 0;
	}
}

// delete from any specified

void deletePosition()
{
	struct node *temp, *position;
	int i = 1, pos;

	// empty
	if (start == NULL)
		printf("\nList is empty\n");

	else {
		printf("\nEnter index : ");

		// Position to be deleted
		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = start;

		// Traverse tILL position
		while (i < pos - 1) {
			temp = temp->link;
			i++;
		}

		// Change Links
		position = temp->link;
		temp->link = position->link;

		// Free
		free(position);
	}
}


