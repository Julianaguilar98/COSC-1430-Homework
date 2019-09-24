#include <iostream>
#include "Converter.h"
#include <string>
#include <sstream>
#include <iomanip>

Converter::Converter() {
	exchange_rate = 1.0;
}

double Converter::GetExchangeRate() {
	return exchange_rate;
}

double Converter::GetExchangeRate(std::string alpha, std::string beta) const {
	return exchange_rate;
}

void Converter::SetExchangeRate(double newExchangeRate) {
	exchange_rate = newExchangeRate;
}