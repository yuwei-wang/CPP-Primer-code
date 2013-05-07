#include <iostream>

int main()
{
	int i = -1;
	const int ic = i;
	const int *pic = &ic;
	//int *const cpi = &ic;	//fail
	const int *const cpic = &ic;
	
	return 0;
}