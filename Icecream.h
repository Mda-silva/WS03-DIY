/***********************************************************************
// OOP244 Workshop #03 p2: tester program
//
// File	Icecream.h
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

#ifndef SENECA_ICECREAM_H
#define SENECA_ICECREAM_H
#include <cstring>
#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>

namespace seneca {

	class Icecream {
	public:
		int I_id;
		int I_noOfScoops;
		bool I_vanillaWafer;
		int I_scoopPrice;
		int I_flavourPrice;
		int I_waferPrice;
		int I_totalPrice;
		void getOrder();
		void printOrder();
		void displayMenu();
		void inputOrder();
	};

}

#endif // !SENECA_ICECREAM_H

