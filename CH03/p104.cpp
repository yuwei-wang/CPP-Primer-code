#include <iostream>
#include <bitset>

using std::cout;
using std::endl;
using std::bitset;

int main()
{
	bitset<32> bitvec;
	bool is_set = bitvec.any();
	bool is_not_set = bitvec.none();
	
	cout << is_set << endl;
	cout << is_not_set << endl << endl;
	
	bitset<32> bitvec2(0xff);
	cout << bitvec2.count() << endl;
	cout << bitvec2.size() << endl;
	
	return 0;
}