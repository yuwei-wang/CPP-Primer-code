#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::string;

int main()
{
	
	vector< vector<int> > ivec;
	//vector<string> svec = ivec;  //fail.  p93-3.11.cpp:12:24: error: conversion from 'std::vector<std::vector<int> >' to non-scalar type 'std::vector<std::basic_string<char> >' requested
	vector<string> svec2(10, "null");
	
	return 0;
}