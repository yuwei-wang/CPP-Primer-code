#include <iostream>

int get_size();

int main()
{
	unsigned buf_size = 1024;
	
	int ia[buf_size];
	int ia2[get_size()];
	int ia3[4 * 7 -14];
	//char st[11] = "fundamental";   // p113-4.1.cpp:12:16: error: initializer-string for array of chars is too long
	
	get_size();
	
	return 0;
}

int get_size()
{
	int i = 1;
	
	return i;
}