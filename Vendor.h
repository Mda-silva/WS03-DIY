/***********************************************************************
// OOP244 Workshop #03 p2: tester program
//
// File	Vendor.h
// Version 1.0
// Date: September 28, 2023
// Author: Yosef Ashibani, Fardad Soleimanloo
// Description
//
// Revision History
// -----------------------------------------------------------
// Name Marquez DaSilva           Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/

#ifndef SENECA_VENDOR_H
#define SENECA_VENDOR_H
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include "Icecream.h"
namespace seneca {

	class Vendor {
	private:
		int V_numOrders;
		Icecream* V_icecream;

	public:
		void setEmpty(); 
		void takeOrders();
		void displayOrders();
		void clearData(); 
		

	};

}

#endif // !SENECA_VENDOR_H
