
#define _CRT_SECURE_NO_WARNINGS
#include "Vendor.h"
using namespace std;

namespace seneca {
	void Vendor::setEmpty()
	{
		V_numOrders = 0;
		V_icecream = nullptr;
	}
	void Vendor::takeOrders()
	{
		
		
		cout << "Seneca Icecream shop" << endl;
		cout << "          @" << endl
			 << "        (' .)" << endl
			 << "       (*.`. )" << endl
			 << "        \\###/" << endl
			 << "         \\#/" << endl
			 << "          V" << endl;
			
		cout << "How many Icecreams?" << endl << "> ";
		cin >> V_numOrders;
		
		 V_icecream = new Icecream[V_numOrders];
		
		
		


		for (int i = 0; i < V_numOrders; ++i)
		{
			cout << "Order number " << i + 1 << ":" << endl;
			V_icecream[i] = Icecream();
			V_icecream[i].getOrder();
			
		}
		

	}
	void Vendor::displayOrders()
	{
		
		double dPrice = 0;
		cout << endl << "********** Order Summary **********" << endl;
		for (int i = 0; i < V_numOrders; ++i)
		{
			cout << "Order No: " << i + 1 << ":" << endl;
			V_icecream[i].printOrder();
			if (i != V_numOrders - 1)
			{
				cout << endl;
			}
		}
		cout << "-----------------------------------" << endl;

		for (int i = 0; i < V_numOrders; ++i)
		{

			dPrice += V_icecream[i].I_totalPrice;

		}

		double dTaxPrice = dPrice * 0.13;
		double dTotal = dPrice + dTaxPrice;

		cout << "Price:" << right << setw(29) << fixed << setprecision(2) << dPrice << endl;
		cout << "Tax:" << right << setw(31) << fixed << setprecision(2) << dTaxPrice << endl;
		cout << "Total Price ($):" << right << setw(19) << fixed << setprecision(2) << dTotal << endl;

	}

	void Vendor::clearData()
	{
		delete[] V_icecream;
		V_icecream = nullptr;
	}
 
}


