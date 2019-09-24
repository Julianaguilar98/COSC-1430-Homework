#include <iostream>

#ifndef CONVERTER_H
#define CONVERTER_H

class Converter {
public: 
	Converter(); //default constructor
	double GetExchangeRate(); //Void for set, type for get
virtual	double GetExchangeRate(std::string alpha, std::string beta) const;
virtual	void SetExchangeRate(double);

protected:
	double exchange_rate; //set to 1.0 by default
};
#endif