#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string str("some string");
	
	for (string::size_type ix=0; ix != str.size(); ++ix)
	{
		cout << str[ix] << endl;
	}
	
	cout << str << endl;
	
	for (string::size_type ix2=0 ; ix2 != str.size(); ++ix2)
	{
		str[ix2] = '*';
	}
	
	cout << str << endl;
	
	return 0;
}