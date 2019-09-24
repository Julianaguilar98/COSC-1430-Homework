#include <iostream>
#include "ConverterU_F.h"
#include <string>
#include <sstream>
#include <iomanip>

double ConverterU_F::GetExchangeRate(std::string alpha, std::string beta) const {
	if (alpha == "F") {
		return exchange_rate;
	}
	else if (alpha == "U") {
		return 1 / exchange_rate;
	}
}

double ConverterU_F::GetExchangeRate() const {
	return exchange_rate;
}

void ConverterU_F::SetExchangeRate(double newExchangeRate) {
	exchange_rate = newExchangeRate;
}