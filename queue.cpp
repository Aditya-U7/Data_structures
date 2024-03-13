/*

Author: Aditya Upadhye

A class-based implementation of the Queue data structure.

*/

#include <iostream>


class queue
{
	int q[100];
	int front = -1; 
	int rear = -1;
	int size;

	public:

	queue()
	{
		size = 5;
	}

	queue(int size)
	{

		this->size = size;

	}

	bool is_queue_empty()
	{
		if ((rear == -1) || (front > rear))
			return true;

		else
			return false;

	}

	void enqueue(int val)
	{

		if ((front == -1) && (front == rear))
		{
			front = 0;
			q[++rear] = val;


		}

		else if (rear == (size - 1))
		{
			std::cout << "Queue is full." << std::endl;
			return;
		}
		else
		{
			q[++rear] = val;
		}	

	}

	void dequeue()
	{
		if (is_queue_empty())
		{
			std::cout << "Queue is empty."<< std::endl;
		}
		else 
		{

			front++;
			if (front > rear)
			{
				front = -1;
				rear = -1;
			}

		}

	}

	void display()
	{       

		if (is_queue_empty())
		{

			std::cout << "Queue is empty." << std::endl;

		}
		else
		{


			for (int i = front; i <= rear; i++)
			{
				std::cout << q[i] << std::endl;
			}

		}

	}
};


int main()
{

	int len;

	int ch,val;

	char con = 'y';

	std::cout << "Enter the size of queue" << std::endl;

	std::cin >> len;

	queue q(len);

	do{

		std::cout << "\n\nEnter your choice:" << std::endl;

		std::cout << "\n1 :Enqueue" << std::endl;

		std::cout << "2  :Dequeue" << std::endl;

		std::cout << "3 :Display" << std::endl;

		std::cin >> ch;

		if (ch == 1)
		{

			std::cout << "\n\nEnter the element to pushed" << std::endl;
			std::cin >> val;
			q.enqueue(val);

		}
		else if (ch == 2)
		{

			q.dequeue();

		}
		else if (ch == 3)
		{

			q.display();

		}

		else
		{

			std::cout << "Invalid choice." << std::endl;

		}

		std::cout << "Do you wish to continue [yes: press y | no: any non-y key]:" << std::endl;
		std::cin >> con;

	}while (con == 'y');

	return 0;
}
