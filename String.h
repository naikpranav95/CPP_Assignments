/*
 * String.h
 *
 *  Created on: 26-Feb-2017
 *      Author: pranav
 */

#ifndef INCLUDE_STRING_H_
#define INCLUDE_STRING_H_
#include<string>
#include<iostream>
#include<stack>
using namespace std;

namespace NString
{
class String
{
private:
	int length;
	char* buffer;
public:
	String(const string test)throw();
	int strlen(void)const;
	void strrev(void)const;
	void struppr(void);
	void strlwr(void);
};
}



#endif /* INCLUDE_STRING_H_ */
