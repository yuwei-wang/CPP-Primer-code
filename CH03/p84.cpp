#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s1;
	//s1 = "aa";
	
	if (s1.empty())
	{
		cout << "The string is empty";
	} else {
		cout <<"The string is not empty";
	}
	
	return 0;
}