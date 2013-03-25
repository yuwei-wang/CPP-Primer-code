#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec(5, 1);
	
	for (vector<int>::size_type ix = 0 ; ix != ivec.size(); ++ix)
	{
		cout << "ivec[" << ix << "] = " << ivec[ix] << endl;
	}
	
	for (vector<int>::size_type ix = 0 ; ix != ivec.size() ; ++ix)
	{
		ivec[ix] = 0;
	}
	
	for (vector<int>::size_type ix = 0 ; ix != ivec.size(); ++ix)
	{
		cout << "ivec[" << ix << "] = " << ivec[ix] << endl;
	}	
	
	return 0;
}