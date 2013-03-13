#include <iostream>

//global variable & local variable

std::string global_str;
int global_int;

int main()
{
	int local_int;
	std::string local_str;
	
	std::cout << "global string: " << global_str << std::endl;
	std::cout << "global int: " << global_int << std::endl;
	std::cout << "local string: " << local_str << std::endl;
	std::cout << "local int: " << local_int << std::endl;
	
	return 0;
}