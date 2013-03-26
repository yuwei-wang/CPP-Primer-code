#include <iostream>
#include <bitset>

using std::cout;
using std::endl;
using std::bitset;

// using test(), set(), reset(), flip() to set the bit

int main()
{
	bitset<32> bitvec1;
	
	cout << "the counts of bit: " << bitvec1.count() << endl << endl;
	
	for (int ix = 0 ; ix != 32 ; ++ix)
	{
		cout << bitvec1.test(ix);
	}
	
	cout << endl << endl;
	
	for (int ix = 0 ; ix != 32 ; ix += 2)
	{
		bitvec1.set(ix);
	}
	
	cout << "after setting, the counts of bit: " << bitvec1.count() << endl << endl;

	for (int ix = 0 ; ix != 32 ; ++ix)
	{
		cout << bitvec1.test(ix);
	}
	
	cout << endl << endl;
	
	bitvec1.flip();
	
	cout << "flip()" << endl << endl;
	
		for (int ix = 0 ; ix != 32 ; ++ix)
	{
		cout << bitvec1.test(ix);
	}
	
	cout << endl << endl;
	
	cout << "reset()" << endl << endl;
	
	bitvec1.reset();
	
	for (int ix = 0 ; ix != 32 ; ++ix)
	{
		cout << bitvec1.test(ix);
	}	
	
	return 0;
}