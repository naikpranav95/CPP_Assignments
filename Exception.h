/*
 * Exception.h
 *
 *  Created on: 26-Feb-2017
 *      Author: pranav
 */

#ifndef INCLUDE_EXCEPTION_H_
#define INCLUDE_EXCEPTION_H_

#include<string>
using namespace std;

namespace NException
{
class Exception
{
private:
	string message;
public:
	Exception(const string message = "Sorry!!");
	string getMessage()const;

};
}

#endif /* INCLUDE_EXCEPTION_H_ */
