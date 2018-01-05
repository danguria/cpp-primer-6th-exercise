// usestock10.cpp
// compile with stock10.cpp
#include <iostream>
#include "stock10.h"

int main()
{
	{
		using std::cout;
		cout << "Using constructors to create new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);  // syntax1
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0); // syntax2
		stock2.show();

		// dynamic object
		// Stock *s = new Stock("Popo");
		
		// c++11 list initialization
		// Stock stock3 = { "Derivative plus", 100, 45.0 };
		// Stock stock4 { "Sport Age Storage, Inc" };
		// Stock stock5 {};

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		stock1.show();
		stock2.show();

		cout << "Using constructors to reset an object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0); // temp object
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done\n";
	}

	return 0;
}
