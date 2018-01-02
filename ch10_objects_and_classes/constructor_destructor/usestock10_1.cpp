// usestock10.cpp
// compile with stock10.cpp
#include <iostream>
#include "stock10.h"

int main()
{
	{
		using std::cout;
		const Stock land = Stock("Kludgehorn Properties");
		land.show(); // compile error because the code for show() fails to guarantee that it won't modify the invoking object

		// solution: place the const keyword after the function parameters
		// void show() const; // promises not to change invoking object
	}

	return 0;
}
