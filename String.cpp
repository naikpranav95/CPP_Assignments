/*
 * String.cpp
 *
 *  Created on: 26-Feb-2017
 *      Author: pranav
 */

#include"../include/String.h"

using namespace NString;
	String::String(const string test)throw()
	{
		this->length = 0;
		int i=0;
		while(test[i]!='\0')
		{
			++this->length;
			++i;
		}
		this->buffer = new char[this->length+1];
		int j=0;
		while(test[j]!='\0')
		{
			this->buffer[j] = test[j];
			++j;
		}
	}
	int String::strlen(void)const
	{
		return this->length;
	}
	void String::strrev(void)const
	{
		stack<char> s1;
		int i=0;

		while(this->buffer[i]!='\0')
		{
			s1.push(this->buffer[i]);
			++i;
		}
		while(!s1.empty())
		{
			cout<<s1.top();
			s1.pop();
		}
	}
	void String::struppr(void)
	{
		int i=0;
		while(this->buffer[i]!='\0')
		{
			int a = this->buffer[i];
			if(a>96||a<123)
			{
				this->buffer[i] -= 32;
				cout<<this->buffer[i];
			}
			++i;
		}
	}
	void String::strlwr(void)
	{
		int i=0;
		while(this->buffer[i]!='\0')
		{
			int a = this->buffer[i];
			if(a>64||a<91)
			{
				this->buffer[i] += 32;
				cout<<this->buffer[i];
			}
			++i;
		}
	}

