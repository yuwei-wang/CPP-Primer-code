#include <iostream>

int main()
{
	std::cout << "Please input numbers you want to add: " << std::endl;
	int sum = 0, val = 0;
	while (std::cin >> val)
	{
		sum += val;
	}
	
	std::cout << "The sum is: " << sum << std::endl;
	
	return 0;
}