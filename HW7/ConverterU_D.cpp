#include <iostream>
#include "ConverterU_D.h"
#include <string>
#include <sstream>
#include <iomanip>

double ConverterU_D::GetExchangeRate(std::string alpha, std::string beta) const {
	if (alpha == "D") {
		return exchange_rate;
	}
	else if (alpha == "U") {
		return 1 / exchange_rate;
	}
}
double ConverterU_D::GetExchangeRate() const  {
	return exchange_rate;
}

void ConverterU_D::SetExchangeRate(double newExchangeRate) {
	exchange_rate = newExchangeRate;
}