#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string word;
	vector<string> text;
	
	cout << "The size of text: " << text.size() << endl << endl;
	
	while (cin >> word)
	{
		text.push_back(word);
	}
	
	cout << "The size of text: " << text.size() << endl << endl;
	
	return 0;
}