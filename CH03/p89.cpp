#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s("Hello World!!!");
	string::size_type	punct_cnt = 0;
	int int_works_too = 0 ;
	
	for (string::size_type index = 0; index != s.size(); ++index)
	{
		if (ispunct(s[index]))
		{
			++punct_cnt;
			++int_works_too;
		}
	}
	
	cout << punct_cnt << " punctuation characters in " << s << endl;
	cout << endl;
	cout << "int works too: " << endl;
	cout << int_works_too << " punctuation characters in " << s << endl;
	
	return 0;
}