#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec;
	
	for (vector<int>::size_type ix = 0 ; ix != 10 ; ++ix)
	{
		ivec.push_back(ix);
	}
	
	if(ivec.size() != 0)
	{
		for (int i = 0 ; i != ivec.size() ; ++i)
		{
			cout << ivec[i] << endl;
		}
	}
	
	return 0;
}