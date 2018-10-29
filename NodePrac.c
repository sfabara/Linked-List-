//Sebastian Fabara
// Node practice!!!!

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
		int data;
		struct node *next;
}node;

node *createNode(int data)
{
	node *newnode = malloc(sizeof(node));

	if(newnode == NULL)
			return NULL;

	newnode->data = data;
	newnode->next = NULL;

	return newnode;
}

void printNode(node *head)
{
	// prints values in node
	if(head == NULL)
			return;

	printf("%d, ", head->data);
	printNode(head->next);
	printf("\n");
}

node *insertNode(node *head, int data)
{
	//Grabs passed value and inserts new node with data and connects previous to current
	node *temp = createNode(data);
	temp->next = head;
	head = temp;

	return head;
}

int main()
{
	node *head = NULL;
	int x = 6, i;

	head = createNode(x);

	for(i = 0; i < 7; i++)
	{
		head = insertNode(head, i);
		printNode(head);
	}
		return 0;
}
