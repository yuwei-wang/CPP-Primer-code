#include <iostream>

int main()
{
	std::cout << "Please input two numbers: " << std::endl;
	int v1, v2, upper, lower;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		upper = v1;
		lower = v2;
	} else {
		upper = v2;
		lower = v1;
	}
	
	for (int i = lower ; i <= upper ; ++i)
	{
		std::cout << i << " ";
	}
	
	std::cout << std::endl;
	
	return 0;
}