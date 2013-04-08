#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("hello world");
	string *sp = &s;
	cout << "*sp is: " << *sp << endl << endl;
	
	*sp = "goodbye";
	cout << "using *sp to change s, after changing, s is: " << s << endl;
	cout << "*sp is: " << *sp << endl << endl;
	
	string s2 = "some value";
	sp = &s2;
	cout << "*sp is: " << *sp << endl << endl;
	
	return 0;
}