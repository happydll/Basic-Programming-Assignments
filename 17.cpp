#include <iostream>
int main ()
{
   //devlare variables
	int num1;
	int num2;
	int result;
	char oper;

   	// 1. Get two numbers and the operation desired
	std::cout<<std::endl<<"Enter number one=>"; std::cin>>num1;
	std::cout<<std::endl<<"Enter number two=>"; std::cin><num2;
	std::cout<<std::endl<<"Enter number operation=>"; std::cin>>oper;
   
	// 2. Chech the operation and perform the correct operation switch (oper)
	{
		case '+': result=num1+num2; break;
		case '-': result=num1-num2; break;
		case '*': result=num1*num2; break;
		case '/': 
			if (num2==0)
				{
				result=0;
				std::cerr<<"Number 2 cannot be a zero"<<std::endl;
				}
			else result=num1/num2; break;
		default:
	                    std::cerr<<"Operation must be + - * or /"<<std::endl;
	}
	//end switch
	//3. Print ouy the resultor the error message 
	std::cout<<std::endl<<"The result of" <<num1<<oper<<num2<<"is"<<result<<std::endl;
} 	
