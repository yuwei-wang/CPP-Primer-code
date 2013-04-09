#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	
	cout << "The value of ival\n"
			<< "direct value: " << ival << "\n"
			<< "indirect value: " << *pi << "\n"
			<< "doubly indirect value: " <<  **ppi << endl << endl;
	
	cout << "&ival is: " << &ival << "\n"
			<< "pi is: " << pi << "\n"
			<< "&pi is: " << &pi << "\n"
			<< "ppi is: " << ppi << "\n"
			<< "&ppi is: " << &ppi << endl;
	
	
	return 0;
}