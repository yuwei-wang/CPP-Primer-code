#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string st("The expense of sprint\n");
	cout << "The size of " << st << " is: " << st.size()
			<< " characters, including the new line" << endl;
	
	return 0;
}