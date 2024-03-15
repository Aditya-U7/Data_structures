/*

Author: Aditya Upadhye

A class-based implementation of the Queue data structure.

*/

#include <iostream>


class queue
{
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

		void enqueue(int user_input)
		{

			if ((front == -1) && (front == rear))
			{
				front = 0;
				q[++rear] = user_input;


			}

			else if (rear == (size - 1))
			{
				std::cout << "Queue is full." << std::endl;
				return;
			}
			else
			{
				q[++rear] = user_input;
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
                                   
                                std::cout << "\nFront: " << front << "  Rear:  " << rear<< "\n\n";
                                
				for (int i = front; i <= rear; i++)
				{
					std::cout << q[i] << " ";
				}

			}

		}

	private:

		int q[100];
		int front = -1; 
		int rear = -1;
		int size;

};


int main()
{

	int length;   

	int user_choice;
	int user_input; 

	char continue_ = 'y'; 
	std::cout << "Enter the size of queue" << std::endl;

	std::cin >> length;

	queue q(length);

	do{

		std::cout << "\n\nEnter your choice:" << std::endl;

		std::cout << "\n1 :Enqueue" << std::endl;

		std::cout << "2  :Dequeue" << std::endl;

		std::cout << "3 :Display" << std::endl;

		std::cin >> user_choice;

		if (user_choice == 1)
		{

			std::cout << "\n\nEnter the element to be enqueued" << std::endl;
			std::cin >> user_input;
			q.enqueue(user_input);

		}
		else if (user_choice == 2)
		{

			q.dequeue();

		}
		else if (user_choice == 3)
		{

			q.display();

		}

		else
		{

			std::cout << "Invalid choice." << std::endl;

		}

		std::cout << "\n\nDo you wish to continue [yes: press y | no: any non-y key]:" << std::endl;
		std::cin >> continue_;

	}while (continue_ == 'y');

	return 0;
}
