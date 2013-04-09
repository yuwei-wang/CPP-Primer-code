#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("some value");
	string *sp1 = &s1;
	
	cout << "*sp1 is: " << *sp1 << endl;
	cout << "sp1 is: " << sp1 << endl << endl;
	
	string s2("another");
	string *sp2 = &s2;
	
	cout << "*sp2 is: " << *sp2 << endl;
	cout << "sp2 is: " << sp2 << endl << endl;
	
	*sp1 = "a new value";
	sp1 = sp2;
	
	cout << "*sp1 is: " << *sp1 << endl;
	cout << "sp1 is: " << sp1 << endl << endl;
	
	return 0;
}