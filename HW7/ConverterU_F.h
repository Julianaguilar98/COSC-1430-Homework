#include <iostream>
#include "Converter.h"
#include <string>
#include <sstream>
#include <iomanip>

#ifndef CONVERTERU_F_H
#define CONVERTERU_F_H

class ConverterU_F : public Converter {
public:
	void SetExchangeRate(double);
	double GetExchangeRate() const; //Void for set, type for get
	virtual double GetExchangeRate(std::string alpha, std::string beta) const;
};
#endif