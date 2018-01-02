// stock20.h -- Stock class interface
// version 20
#ifndef STOCK20_H_
#define STOCK20_H_
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
	    Stock();	// default constructor
		Stock(const std::string& co, long n = 0, double pr = 0.0);
		~Stock();	// do-nothing destructor
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		// TODO:
		void show() const;
		// TODO:
		const Stock& topval(const Stock& s) const;

};

#endif // STOCK20_H_
