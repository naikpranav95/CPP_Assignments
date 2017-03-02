/*
 * Main.cpp
 *
 *  Created on: 02-Mar-2017
 *      Author: pranav
 */
#include"../include/tollBooth.h"
#include<iostream>
using namespace std;



using namespace NToll;

int menu()
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Paid Car"<<endl;
	cout<<"2.Non Paid Car"<<endl;
	cout<<"3.Total Cars"<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>choice;
	return choice;
}

int main()
{
	int choice;
	tollBooth tb;
	while((choice=menu())!=0)
	{
		switch(choice)
		{
		case 1:
			tb.payingCar();
			break;
		case 2:
			tb.nonpayCar();
			break;
		case 3:
			tb.printRecord();
			break;
		}
	}
}
