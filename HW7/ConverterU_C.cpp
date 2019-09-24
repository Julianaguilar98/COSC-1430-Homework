#include <iostream>
#include "ConverterU_C.h"
#include <string>
#include <sstream>
#include <iomanip>

double ConverterU_C::GetExchangeRate(std::string alpha, std::string beta) const {
	if (alpha == "C") {
		return exchange_rate;
	}
	else if (alpha == "U") {
		return 1 / exchange_rate;
	}
}

double ConverterU_C::GetExchangeRate() const {
	return exchange_rate;
}

void ConverterU_C::SetExchangeRate(double newExchangeRate) {
	exchange_rate = newExchangeRate;
}