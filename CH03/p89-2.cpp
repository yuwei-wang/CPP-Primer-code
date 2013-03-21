#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("Hello World!!!");
	
	for (string::size_type index = 0 ; index != s.size() ; ++ index)
	{
		s[index] = toupper(s[index]);
	}
	
	cout << s << endl;
	
	return 0;
}