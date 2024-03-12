/*

Author: Aditya Upadhye

A C program for creating a linked_list using a structure and a structure pointer.

*/	


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct list_node
{
	int value;
	struct list_node* next;
};

struct list_node* head = NULL;
struct list_node* current = NULL;


void add_node(int val)
{

	if (head == NULL)
	{
		head = malloc(sizeof(struct list_node));
		head -> value = val;
		head -> next = NULL;
		current = head;

		
	}

	else
	{
		struct list_node* tmp = malloc(sizeof(struct list_node));
		tmp -> value = val;
		tmp -> next = NULL;


		current -> next = tmp;
		current = tmp;


	}

}

void display()
{
        struct list_node* ptr = head;
	while (true)
	{

		printf("%d\n", ptr -> value);
		ptr = ptr -> next;
		if (ptr == NULL)
			break;
	}
	
}


int main()
{
	
	for (int i = 0; i<=100; i++)
	    add_node(i);
        
	display();

}
