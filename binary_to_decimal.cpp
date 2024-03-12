/

* Author: Aditya Upadhye

A simple program to convert binary to equivalent decimal.

*/


#include <iostream>
#include <cmath>


void binary_to_decimal(std::string n)
{

	short leng = n.length() - 1;
	short tc = leng;
	int ans = 0;

	while (leng >= 0)
	{

		std::cout << n[leng] << std::endl;

		if (n[tc - leng] == '1')
			ans = ans + 1 * std::pow(2, leng);

		leng--;

	} 

	std::cout << ans << std::endl;

}


/*
   void binary_to_octal(std::string n)
   {


   }
   */

int main()
{
	std::string user_input;
	std::cin >> user_input;

	binary_to_decimal(user_input);
	//binary_to_octal()
	return 0;

}
