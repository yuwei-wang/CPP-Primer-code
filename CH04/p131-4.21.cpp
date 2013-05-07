#include <iostream>

int main()
{
	int i = -1;
	const int ic = i;
	const int *pic = &ic;
	//int *const cpi = &ic;	//fail
	const int *const cpic = &ic;

	//==================
	i = ic;
	pic = &ic;
	//cpi = pic;	//'cpi' was not declared in this scope
	pic = cpic;
	//cpic = &ic;	//error: assignment of read-only variable 'cpic'
	//ic = *cpic;	//error: assignment of read-only variable 'ic'
	
	return 0;
}