#include <iostream>
#include "ConverterU_A.h"
#include <string>
#include <sstream>
#include <iomanip>

double ConverterU_A::GetExchangeRate(std::string alpha, std::string beta) const {
if (alpha == "A"){
	return exchange_rate;
	}
else if (alpha == "U") {
	return 1 / exchange_rate;
	}
}

double ConverterU_A::GetExchangeRate() const{
	return exchange_rate;
}

void ConverterU_A::SetExchangeRate(double newExchangeRate) {
	exchange_rate = newExchangeRate;
}