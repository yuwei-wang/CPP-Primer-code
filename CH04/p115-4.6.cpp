#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const size_t array_size = 10;
	int ia[array_size];
	
	for(size_t ix = 0 ; ix != array_size ; ++ix)
	{
		ia[ix] = ix;
		cout << "ia[" << ix << "] is : " << ia[ix] << endl;
	}
	
	//for(size_t ix = 0 ; ix != array_size ; ++ix)
	//{
	//	cout << "ia[" << ix << "] is : " << endl;
	//}
	
	return 0;
}