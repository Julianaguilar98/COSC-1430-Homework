#include <iostream>
#include "ConverterU_G.h"
#include <string>
#include <sstream>
#include <iomanip>

double ConverterU_G::GetExchangeRate(std::string alpha, std::string beta) const {
	if (alpha == "G") {
		return exchange_rate;
	}
	else if (alpha == "U") {
		return 1 / exchange_rate;
	}
}

double ConverterU_G::GetExchangeRate() const {
	return exchange_rate;
}

void ConverterU_G::SetExchangeRate(double newExchangeRate) {
	exchange_rate = newExchangeRate;
}