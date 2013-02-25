#include <iostream>

int main()
{
	std::cout << "Please input two numbers: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	while (v1 > v2)
	{
		int sum = 0;
		for (int i = v2; i <= v1; ++i)
		{
			sum += i;
		}
		std::cout << "The sum is: " << sum << std::endl;
		return 0;
	}
	
	while (v2 > v1)
	{
		int sum2 = 0;
		for (int j = v1; j <= v2; ++j)
		{
			sum2 += j;
		}
		std::cout << "The sum is: " << sum2 << std::endl;
		return 0;
	}
}