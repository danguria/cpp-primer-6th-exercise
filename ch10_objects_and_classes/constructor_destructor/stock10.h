// stock10.h -- Stock class interface
// version 10
#ifndef STOCK10_H_
#define STOCK10_H_
#include <string>

class Stock // class declaration
{
	private:
		std::string company;
		long shares;
		double share_val;
		double total_val;
		void set_tot() { total_val = shares * share_val; }
	public:
		// TODO:
		// two constructors
	    Stock();	// default constructor
		Stock(const std::string& co, long n = 0, double pr = 0.0);
		~Stock();	// destructor, class can have only one destructor
		// TODO:
		//void acquire(const std::string& co, long n, double pr);
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show();
};

#endif // STOCK10_H_
