#include <iostream>
#include <bitset>

using std::cout;
using std::endl;
using std::bitset;

// using subscript to set bitset

int main()
{
	bitset<32> bitvec1;
	
	cout << bitvec1.count() << endl << endl;
	
	for (int i = 0 ; i != 32 ; i += 2)
	{
		bitvec1[i] = 1;
	}
	
	cout << bitvec1.count() << endl;
	
	return 0;
}
