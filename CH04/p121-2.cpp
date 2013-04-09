#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int ival = 1024, ival2 = 2048;
	int *pi = &ival, *pi2 = &ival2;
	
	cout << "*pi is: " << *pi << endl;
	cout << "*pi2 is: " << *pi2 << endl;
	cout << "pi is: " << pi << endl;
	cout << "pi2 is: " << pi2 << endl << endl;
	
	pi = pi2;

	cout << "*pi is: " << *pi << endl;
	cout << "*pi2 is: " << *pi2 << endl;
	cout << "pi is: " << pi << endl;
	cout << "pi2 is: " << pi2 << endl << endl;
	
	int &ri = ival, &ri2 = ival2;
	
	cout << "&ri is: " << &ri << endl;
	cout << "&ri2 is: " << &ri2 << endl;
	cout << "ri is: " << ri << endl;
	cout << "ri2 is: " << ri2 << endl << endl;
	
	ri = ri2;
	
	cout << "&ri is: " << &ri << endl;
	cout << "&ri2 is: " << &ri2 << endl;
	cout << "ri is: " << ri << endl;
	cout << "ri2 is: " << ri2 << endl << endl;
	
	return 0;
}