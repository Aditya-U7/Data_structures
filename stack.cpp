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
	
	void push(int val)
	{
		if (top >= (size -1))
		{
			std::cout << "Stack overflow" << std::endl;
			return;
		}
		else
		{
			s[++top] = val;
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
			
			std::cout << "Top of stack is: " << s[top] << std::endl;
			for (int i = top - 1; i >= 0; i--)
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
	int top;
        int size;
};


int main()
{

	int len;

	int ch,val;

	char con = 'y';

	std::cout << "Enter the size of stack" << std::endl;

	std::cin >> len;

	stack s(len);

	do{

		std::cout << "\n\nEnter your choice:" << std::endl;

		std::cout << "\n1.Push" << std::endl;

		std::cout << "2.Pop" << std::endl;

		std::cout << "3.Display" << std::endl;

		std::cout << "4.Get top" << std::endl;

		std::cin >> ch;

		if (ch == 1)
		{

			std::cout << "\n\nEnter the element to pushed" << std::endl;
			std::cin >> val;
			s.push(val);

		}
		else if (ch == 2)
		{

			s.pop();

		}
		else if (ch == 3)
		{

			s.display();

		}
		else if (ch == 4)
		{

			s.get_top();

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



























