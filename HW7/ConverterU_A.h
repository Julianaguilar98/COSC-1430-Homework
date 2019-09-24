#include <iostream>
#include "Converter.h"
#include <string>
#include <sstream>
#include <iomanip>

#ifndef CONVERTERU_A_H
#define CONVERTERU_A_H

class ConverterU_A : public Converter {
public:
	void SetExchangeRate(double);
	double GetExchangeRate() const; //Void for set, type for get
	virtual double GetExchangeRate(std::string alpha, std::string beta) const;
};
#endif