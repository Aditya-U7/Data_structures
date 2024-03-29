/*

Author: Aditya Upadhye

A C program for reversing the nodes in a linked_list.

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

bool is_linked_list_empty()
{
       if (head == NULL)
       {
		printf("The Linked list is empty.\n");
                return true;  
       }
       else
       {
                return false;   
       }
                
}



void add_node(int val)
{

	struct list_node* tmp = malloc(sizeof(struct list_node));

	tmp -> value = val;
	tmp -> next = NULL;

	if (head == NULL)
	{
		head = tmp;
	}

	else
	{
		current -> next = tmp;
	}

	current = tmp;

}

void reverse_the_linked_list()
{
        
	if (is_linked_list_empty())
	    exit(1); 

	struct list_node* curr = head;
	struct list_node* prev = NULL; 
	struct list_node* tmp = NULL; 

	while (curr -> next != NULL)
	{

		tmp = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = tmp;

	}

	curr -> next = prev;
	head = curr;

}


void display()
{       
        if (is_linked_list_empty())
	    exit(1); 
	
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

	for (int i = 0; i <= 100; i++)
		add_node(i);

	reverse_the_linked_list();
	display();

}
