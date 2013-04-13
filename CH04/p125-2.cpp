#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const size_t arr_sz = 5;
	int int_arr[arr_sz] = {0, 1, 2, 3, 4};
	
	for (int *pbegin = int_arr, *pend = int_arr + arr_sz; pbegin != pend ; ++pbegin)
	{
		cout << *pbegin << ' ';
	}
	
	cout << endl;
	
	return 0;
}