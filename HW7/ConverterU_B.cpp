#include <iostream>
#include "ConverterU_B.h"
#include <string>
#include <sstream>
#include <iomanip>

double ConverterU_B::GetExchangeRate(std::string alpha, std::string beta) const {
	if (alpha == "B") {
		return exchange_rate;
	}
	else if (alpha == "U") {
		return 1 / exchange_rate;
	}
}

double ConverterU_B::GetExchangeRate() const {
	return exchange_rate;
}

void ConverterU_B::SetExchangeRate(double newExchangeRate) {
	exchange_rate = newExchangeRate;
}