/***********************************************************************
// OOP244 Workshop #03 p2: tester program
//
// File	Icecream.cpp
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



#define _CRT_SECURE_NO_WARNINGS

#include "Icecream.h"
using namespace std;

namespace seneca {

	


	void Icecream::getOrder()
	{
		displayMenu();
		inputOrder();

	}

	void Icecream::printOrder()
	{
		

		I_scoopPrice = I_noOfScoops * 5;
		cout << "Order details:                Price" << endl 
			<< "-----------------------------------" << endl;
		cout << "Number of scoops, " << I_noOfScoops << " total:";
		cout << right << setw(6) << I_scoopPrice << ".00" << endl;
		switch (I_id) {
		case 1:
			I_flavourPrice = I_noOfScoops * 1;
			cout << "Chocolate flavour:";
			cout << right << setw(14);
			cout << I_flavourPrice << ".00" << endl;
			break;
		case 2:
			cout << "Strawberry flavour";
			cout << right << setw(14) << endl;
			break;
		case 3:
			cout << "Mango flavour";
			cout << right << setw(14) << endl;
			break;
		case 4:
			cout << "Tutti fruit flavour";
			cout << right << setw(14) << endl;
			break;
		case 5:
			cout << "Almond crunch flavour";
			cout << right << setw(14) << endl;
			break;
		}

		cout << left << "Vanilla Wafer:";
		cout << right << setw(18);

		if (I_vanillaWafer == true)
		{
			I_waferPrice = 5;
			cout << I_waferPrice << ".00" << endl;
		}
		else
		{
			cout << I_waferPrice << ".00" << endl;
		}
		cout << "Price:";
		cout << right << setw(26);
		if (I_id == 1)
		{
			if (I_vanillaWafer == true)
			{
				I_totalPrice = I_scoopPrice + I_flavourPrice + I_waferPrice;	
				cout << I_totalPrice << ".00" << endl;
			}
			else
			{
				I_totalPrice = I_scoopPrice + I_flavourPrice;
				cout << I_totalPrice << ".00" << endl;
			}
		}
		else
		{
			if (I_vanillaWafer == true)
			{
				I_totalPrice = I_scoopPrice + I_waferPrice;
				cout << I_totalPrice << ".00" << endl;
			}
			else
			{
				I_totalPrice = I_scoopPrice;
				cout << I_totalPrice << ".00" << endl;
			}

		}
	}

	void Icecream::displayMenu()
	{
	cout << "Select flavour:" << endl
			<< "----------------" << endl
			<< "1: Chocolate" << endl
			<< "2: Strawberry" << endl
			<< "3: Mango" << endl
			<< "4: Tutti fruit" << endl
			<< "5: Almond crunch" << endl
			<< "----------------" << endl;
	}
	void Icecream::inputOrder()
	{
		 I_scoopPrice = 0;
		 I_flavourPrice = 0;
		 I_waferPrice = 0;
		 I_totalPrice = 0;
		cout << "> ";
		cin >> I_id;

		if (I_id == 0)
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Invalid entry, retry" << endl;
			cout << "> ";
			cin >> I_id;
		}

		while (I_id < 1 || I_id > 5) 
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Invlid value(1<=val<=5)" << endl;
			cout << "> ";
			cin >> I_id;
		};

		cout << "Number of Scoops (max 3)" << endl;
		cout << "> ";
		cin >> I_noOfScoops;

		if (I_noOfScoops < 1 || I_noOfScoops > 3) 
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Invalid entry, retry" << endl;
			cout << "> ";
			cin >> I_noOfScoops;
		}

		while (I_noOfScoops < 1 || I_noOfScoops > 3) 
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Invlid value(1<=val<=3)" << endl;
			cout << "> ";
			cin >> I_noOfScoops;
		}
		char choice;
		cout << "Vanilla wafer cone?" << endl << "(Y)es/(N)o > ";
		cin >> choice;
		



		do {

			if (cin.peek() == '\n' && choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
			{
				
				cout << "Only Y or N are acceptable:" << endl << "> ";
				cin >> choice;
				
			}

			else if (cin.peek() != '\n')
			{
				
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Only Y or N are acceptable:" << endl << "> ";
				cin >> choice;

			}
			
			
		} while (cin.peek() != '\n' || choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');


		//while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
		//	cout << "Only Y or N are acceptable:d" << endl << "> ";

		//	// Clear the input buffer and ignore remaining characters
		//	std::cin.clear();
		//	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		//	// Read a new character
		//	std::cin >> choice;

		//	// Convert choice to uppercase
		//	
		//}

		if (choice == 'y' || choice == 'Y')
		{
			I_vanillaWafer = true;
		}
		else 
		{
			I_vanillaWafer = false;
		}

	}


	
}