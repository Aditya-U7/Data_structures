/*

Author: Aditya Upadhye

A class-based implementation of the Stack data structure.

*/

#include <iostream>


class stack
{
	public:

	stack()
	{
		size = 5;
	}
	
	stack(int size)
	{

		this->size = size;
		top = -1;
	}

	void get_top()
	{

		if (is_stack_empty())
			std::cout << "Stack is empty." << std::endl;
		else
			std::cout << "Top of stack is: " << s[top] << std::endl;

	}

	bool is_stack_empty()
	{
		if (top == -1)
			return true;
		else
			return false;

	}
	
	void push(int user_input)
	{
		if (top >= (size -1))
		{
			std::cout << "Stack overflow" << std::endl;
			return;
		}
		else
		{
			s[++top] = user_input;
		}	

	}

	void pop()
	{
		if (is_stack_empty())
		{
			std::cout << "Stack underflow. Stack is empty."<< std::endl;
		}
		else 
		{
			top--;
		}

	}

	void display()
	{       
		if (top >= 0)
		{
			
			std::cout << "\nTop of stack is: " << s[top] << std::endl;
			std::cout << "\nStack:\n\n";
			
			for (int i = top; i >= 0; i--)
			{
				std::cout << s[i] << std::endl;
			}
		
		}
		else
		{
		
			std::cout << "Stack is empty." << std::endl;
		
		}

	}
	
	private:
	
	int s[100];
	int top, size;
	
	
};

int main()
{

	int length;

	int user_choice;
	
	int user_input;

	char continue_ = 'y';

	std::cout << "Enter the size of stack" << std::endl;

	std::cin >> length;

	stack s(length);

	do{

		std::cout << "\n\nEnter your choice:" << std::endl;

		std::cout << "\n1.Push" << std::endl;

		std::cout << "2.Pop" << std::endl;

		std::cout << "3.Display" << std::endl;

		std::cout << "4.Get top" << std::endl;

		std::cin >> user_choice;

		if (user_choice == 1)
		{

			std::cout << "\n\nEnter the element to pushed" << std::endl;
			std::cin >> user_input;
			s.push(user_input);

		}
		else if (user_choice == 2)
		{

			s.pop();

		}
		else if (user_choice == 3)
		{

			s.display();

		}
		else if (user_choice == 4)
		{

			s.get_top();

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



























