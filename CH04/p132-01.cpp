#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

int main()
{
	const char *cp1 = "A string example";	//16 chars
	const char *cp2 = "A different string";	//18 chars
	
	int i = strcmp(cp1, cp2);
	cout << "strcmp(cp1, cp2), i is: " << i << endl << endl;
	
	i = strcmp(cp2, cp1);
	cout << "strcmp(cp2, cp1), i is: " << i << endl << endl;
	
	i = strcmp(cp1, cp1);
	cout << "strcmp(cp1, cp1), i is: " << i << endl << endl;
	
	return 0;
}