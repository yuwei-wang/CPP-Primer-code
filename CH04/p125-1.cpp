#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int ia[] = {0, 2, 4, 6, 8};
	
	cout << "int ia[] = {0, 2, 4, 6, 8};" << endl;
	
	int *ip = ia;
	
	int *p = &ia[2];
	cout << "*p = &ia[2], *p is: " << *p << endl;
	
	int j = p[1];
	cout << "int j = p[1];, j is: " << j << endl;
	
	int k = p[-2];
	cout << "int k = p[-2];, k is: " << k << endl;
	
	return 0;
}
