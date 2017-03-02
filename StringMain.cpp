/*
 * Main.cpp
 *
 *  Created on: 26-Feb-2017
 *      Author: pranav
 */
#include<cstdlib>
#include<iostream>
#include<stack>
#include<string>
using namespace std;

#include"../include/String.h"
using namespace NString;

int main()
{
	try
	{
		String s1("maharashtra");
		cout<<"Reversed string is: ";
		s1.strrev();
		cout<<endl;
		cout<<"String length is: "<<s1.strlen()<<endl;
		s1.struppr();
		cout<<endl;
		s1.strlwr();
	}
	catch(std::bad_alloc &bad)
	{
		cerr<<"Allocation failed!!"<<bad.what()<<endl;
	}

	return 0;
}
