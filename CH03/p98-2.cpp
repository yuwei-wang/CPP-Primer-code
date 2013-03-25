#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec(5,1);
	
	for (vector<int>::iterator iter = ivec.begin() ;  iter != ivec.end() ; ++iter)
	{
		cout << *iter << endl;
	}
	
	for (vector<int>::iterator iter = ivec.begin() ; iter != ivec.end() ; ++iter)
	{
		*iter = 0;
	}
	
	for (vector<int>::iterator iter = ivec.begin() ;  iter != ivec.end() ; ++iter)
	{
		cout << *iter << endl;
	}
	
	return 0;
}