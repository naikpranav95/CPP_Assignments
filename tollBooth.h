/*
 * tollBooth.h
 *
 *  Created on: 02-Mar-2017
 *      Author: pranav
 */

#ifndef INCLUDE_TOLLBOOTH_H_
#define INCLUDE_TOLLBOOTH_H_


/*
 * tollBooth.cpp
 *
 *  Created on: 02-Mar-2017
 *      Author: pranav
 */
#include<iostream>
using namespace std;
namespace NToll
{
	class tollBooth
	{
	private:
		size_t totalpayingCars;
		double totalMoney;
		size_t totalnonpayingCars;
		size_t totalCars;
	public:
		tollBooth();
		void payingCar();
		void nonpayCar();
		void printRecord();
	};
}



#endif /* INCLUDE_TOLLBOOTH_H_ */
