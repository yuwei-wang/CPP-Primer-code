#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> ivec1;
	vector<int> ivec2(10);
	vector<int> ivec3(10, 42);
	vector<string> svec1;
	vector<string> svec2(10);
	vector<string> svec3(10, "hello");
	
	cout << "size of ivec1: " <<   ivec1.size() << endl;
	if (ivec1.empty())
	{
		cout << "ivec1 is empty" << endl << endl;
	}
	
	cout << "size of ivec2: " << ivec2.size() << endl;
	cout << "ivec2[0]: " << ivec2[0] << endl << endl;
	
	cout << "size of ivec3:" << ivec3.size() << endl;
	cout << "ivec3[0]: " << ivec3[0] << endl << endl;
	
	cout << "size of svec1: " << svec1.size() << endl;
	if (svec1.empty())
	{
		cout << "svec1 is empty" << endl << endl;
	}
	
	cout << "size of svec2: " << svec2.size() << endl;
	cout << "svec2[0]: " << svec2[0] << endl << endl;
	
	cout << "size of svec3: " << svec3.size() << endl;
	cout << "svec3[0]: " << svec3[0] << endl << endl;
	
	return 0;
}