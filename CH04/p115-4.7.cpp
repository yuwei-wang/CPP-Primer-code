#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec1(10,1);
	vector<int> ivec2(10);

	cout << "ivec1: " << endl;
	for(vector<int>::iterator iter = ivec1.begin() ; iter != ivec1.end() ; ++iter)
	{
		cout << *iter;
	}
	
	cout << endl << endl;

	cout << "ivec2: " << endl;
	for(vector<int>::iterator iter = ivec2.begin() ; iter != ivec2.end() ; ++iter)
	{
		cout << *iter;
	}
	
	cout << endl << endl;
	
	for(vector<int>::size_type ix = 0 ; ix != ivec1.size() ; ++ix)
	{
		ivec2[ix] = ivec1[ix];
	}
	
	cout << "after setting, ivec2: " << endl;
	for(vector<int>::iterator iter = ivec2.begin() ; iter != ivec2.end() ; ++iter)
	{
		cout << *iter;
	}
	
	return 0;
}