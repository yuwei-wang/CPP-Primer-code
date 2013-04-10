#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int ia[] = {0, 2, 4, 6, 8};
	int *ip = ia;
	int *ip2 = ip + 4;
	
	cout << "*ip2 = ip + 4, *ip2 is: " << *ip2 << endl;
	cout << "*ip is: " << *ip << endl;
	cout << "ip is: " << ip << endl;
	
	ip = &ia[4];
	
	cout << "ip = &ia[4], *ip is: " << *ip << endl << endl;
	cout << "ip = &ia[4], ip is: " << ip << endl << endl;
	
	return 0;
}