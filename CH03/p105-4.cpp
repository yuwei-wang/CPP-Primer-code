#include <iostream>
#include <bitset>

using std::cout;
using std::endl;
using std::bitset;

// to_ulong()

int main()
{
	bitset<32> intvec1;
	
	cout << intvec1 << endl << endl;
	
	intvec1.flip();
	
	cout << intvec1 << endl << endl;
	
	intvec1.to_ulong();
	
	cout << intvec1 << endl << endl;
	
	return 0;
}