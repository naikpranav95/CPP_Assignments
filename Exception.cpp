/*
 * Exception.cpp
 *
 *  Created on: 26-Feb-2017
 *      Author: pranav
 */
#include"../include/Exception.h"
using namespace NException;

	Exception::Exception(const string message)
	{
		this->message = message;
	}
	string Exception::getMessage()const
	{
		return this->message;
	}


