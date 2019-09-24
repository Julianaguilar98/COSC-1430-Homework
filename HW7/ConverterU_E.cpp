#include <iostream>
#include "ConverterU_E.h"
#include <string>
#include <sstream>
#include <iomanip>

double ConverterU_E::GetExchangeRate(std::string alpha, std::string beta) const {
	if (alpha == "E") {
		return exchange_rate;
	}
	else if (alpha == "U") {
		return 1 / exchange_rate;
	}
}

double ConverterU_E::GetExchangeRate() const  {
	return exchange_rate;
}

void ConverterU_E::SetExchangeRate(double newExchangeRate) {
	exchange_rate = newExchangeRate;
}