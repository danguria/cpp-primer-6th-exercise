// usestock0.cpp
// compile with stock00.cpp
#include <iostream>
#include "stock00.h"

int main()
{
	Stock s;
	
	s.acquire("NanoSmart", 20, 12.50);
	//s.company = "google";
	s.show();

	s.sell(400, 20.00);
	s.show();

	s.buy(300000, 40.125);
	s.show();

	s.sell(300000, 0.125);
	s.show();

	return 0;
}
