#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
	int* ip; //compile pass but execute fail
	cout <<  "*ip is: " << ip << endl << endl;
	
	const int cinta = 0;
	int* ip2 = cinta; //compile pass
	cout <<  "*ip is: " << ip2 << endl << endl;
	
	string s, *sp = 0;  //compile pass but execute fail
	cout <<  "*sp is: " << sp << endl << endl;
	
	//int i2; double* dp = &i2; // fail
	int i2; int* dp = &i2;
	cout <<  "*dp is: " << dp << endl << endl;
	
	int* ip3, ip4;
	
	const int i5 = 0, *p5 = i5;
	
	string *p = NULL;
	
	return 0;
}