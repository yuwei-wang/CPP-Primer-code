#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

int main()
{
	const char *cp1 = "A string example";	//16 char
	const char *cp2 = "A different string";	//18 char
	
	cout << strlen(cp1) << endl;
	cout << strlen(cp2) << endl;
	
	int i = strcmp(cp1, cp2);
	cout << "strcmp(cp1, cp2), i = " << i << endl;
	
	i = strcmp(cp2, cp1);
	cout << "strcmp(cp2, cp1), i = " << i << endl;
	
	i = strcmp(cp1, cp1);
	cout << "strcmp(cp1, cp1), i = " << i << endl;
	
	char largeStr[16 + 18 + 2];
	strcpy(largeStr, cp1);
	strcat(largeStr, " ");
	strcat(largeStr, cp2);
	
	cout << largeStr << endl;
	
	return 0;
}