#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("hello world");
	string *sp = &s;
	cout << "*sp is: " << *sp << endl;
	
	return 0;
}