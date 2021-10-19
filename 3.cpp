#include <iostream>
int main()
	{
		float num1;
		float num2;
		char op;
		float ans;
		std::cout <<"pelase enter a number:";
		std::cin >> num1;
		std::cout <<"pelase enter a another number:";
		std::cin >> num2;
		std::cout <<"Press A to add the two numbers"<<std::endl;
		std::cout<<"Press S to subrtrcat the two numbers"<<std::endl;
		std::cout<<"Press M to multiply the two number"<<std::endl;
		std::cout<<"Press D to divide  the two numbers."<<std::endl;
		std::cin >> op;
			if (op==65)
				{
				ans= num1 + num2;
				} 
			if (op==83)
				{
				ans= num1 - num2;
				}
			if (op==77)
				{
				ans= num1 * num2;
				}
			if (op==68)
				{
				ans= num1 / num2;
				}
		std::cout<<"The answer is: "<<ans<<std::endl;
	}
