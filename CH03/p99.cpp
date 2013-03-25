#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
	string word;
	vector<string> svec;
	
	cout << "Please input strings: " << endl;
	
	while(cin >> word)
	{
		svec.push_back(word);
	}
	
	for (vector<string>::const_iterator iter = svec.begin() ; iter != svec.end() ; ++iter)
	{
		cout << *iter << endl;
	}
	
	return 0;
}