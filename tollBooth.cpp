/*
 * tollBooth.cpp
 *
 *  Created on: 02-Mar-2017
 *      Author: pranav
 */
#include"../include/tollBooth.h"

using namespace NToll;
		tollBooth::tollBooth() : totalCars(0),totalMoney(0),totalnonpayingCars(0)
		{ }
		void tollBooth::payingCar()
		{
			++this->totalCars;
			++this->totalpayingCars;
			this->totalMoney += 0.50;
		}

		void tollBooth::nonpayCar()
		{
			++this->totalnonpayingCars;
			++this->totalCars;
		}
		void tollBooth::printRecord()
		{
			cout<<"Total cars: "<<endl;
			cout<<this->totalCars<<endl;
			cout<<"The total paying cars: "<<endl;
			cout<<this->totalpayingCars<<endl;
			cout<<"Total money collected through paying cars: "<<endl;
			cout<<this->totalMoney<<endl;
			cout<<"Total non paying cars: "<<endl;
			cout<<this->totalnonpayingCars<<endl;
		}
