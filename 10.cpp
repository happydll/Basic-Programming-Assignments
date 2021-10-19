 #include <iostream> 
int main() 
	{ 
		int num; 
	std::cout << "Enter a number greater than 7: "; 
	std::cin >> num; 
	while (num <= 7) 
		{
		std::cout << "Try again: "; 
		std::cin >> num; 
		} 
	}
