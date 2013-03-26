#include <iostream>
#include <bitset>

using std::cout;
using std::endl;
using std::bitset;

// using set() to set bitset

int main()
{
	bitset<32> bitvec1;
	
	cout << "the counts of bit: " << bitvec1.count() << endl << endl;
	
	for (int ix = 0 ; ix != 32 ; ix += 2)
	{
		bitvec1.set(ix);
	}
	
	cout << "after setting, the counts of bit: " << bitvec1.count() << endl << endl;
	
	return 0;
}