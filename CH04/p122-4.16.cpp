#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i = 42, j = 1024;
	int *p1 = &i, *p2 = &j;
	*p2 = *p1 * *p2;
	
	cout << "*p2 = *p1 * *p2 = " << *p2 << endl << endl;
	
	*p1 *= *p1;
	cout << "*p1 *= *p1 = " << *p1 << endl << endl;
	
	return 0;
}