#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2, s3;
	s1 = "Hello";
	s2 = "Hello World";
	s3 = "Hiya";
	
	//  s3 > s2 > s1
	
	if (s1 >= s2)
	{
		cout << s1 << " >= " << s2 << endl;
	} else {
		cout << s1 << " < " << s2 << endl;
	}
	
	if (s2 >= s3)
	{
		cout << s2 << " >=  " << s3 << endl;
	} else {
		cout << s2 << " < " << s3 << endl;
	}

	return 0;
}