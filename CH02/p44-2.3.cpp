#include <iostream>

int main()
{
	int value, pow, result = 1;
	std::cout << "Please input two numbers: " << std::endl;
	std::cin >> value >> pow;
	
	//std::cout << "Value is: " << value << ", " << "pow is: " << pow << std::endl;
	
	for (int cnt = 0; cnt != pow; ++cnt)
	{
		result *= value;
	}
	
	std::cout << value
		<< " raised to the power of "
		<< pow << ": \t"
		<< result << std::endl;
	
	return 0;
}