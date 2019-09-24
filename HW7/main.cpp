#include "Converter.h"
#include "ConverterU_A.h"
#include "ConverterU_B.h"
#include "ConverterU_C.h"
#include "ConverterU_D.h"
#include "ConverterU_E.h"
#include "ConverterU_F.h"
#include "ConverterU_G.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
	string a, b, c, d, e, f, g;
	string::size_type size;

	ConverterU_A u2a;
	ConverterU_B u2b;
	ConverterU_C u2c;
	ConverterU_D u2d;
	ConverterU_E u2e;
	ConverterU_F u2f;
	ConverterU_G u2g;
	
	Converter* converters[] = { &u2a, &u2b, &u2c, &u2d, &u2e, &u2f, &u2g };
	// You are required to use the array converters to complete this homework. 
	//Please DO NOT use variable u2a, u2b, u2c, u2d, u2e, u2f, or u2g.
	
	// read exchange_rate_u2a from cin;
	getline(cin, a);
	double au = stod(&a[5], &size);
	u2a.SetExchangeRate(au);

	// read exchange_rate_u2b from cin;
	getline(cin, b);
	double bu = stod(&b[5], &size);
	u2b.SetExchangeRate(bu);

	// read exchange_rate_u2c from cin;
	getline(cin, c);
	double cu = stod(&c[5], &size);
	u2c.SetExchangeRate(cu);

	// read exchange_rate_u2d from cin;
	getline(cin, d);
	double du = stod(&d[5], &size);
	u2d.SetExchangeRate(du);

	// read exchange_rate_u2e from cin;
	getline(cin, e);
	double eu = std::stod(&e[5], &size);
	u2e.SetExchangeRate(eu);

	// read exchange_rate_u2f from cin;
	getline(cin, f);
	double fu = std::stod(&f[5], &size);
	u2f.SetExchangeRate(fu);

	// read exchange_rate_u2g from cin;
	getline(cin, g);
	double gu = std::stod(&g[5], &size);
	u2g.SetExchangeRate(gu);

	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	
	double exchange_rate_a2b = converters[0]->GetExchangeRate("A", "U") * converters[1]->GetExchangeRate("U", "B");
	double exchange_rate_a2c = converters[0]->GetExchangeRate("A", "U") * converters[2]->GetExchangeRate("U", "C");
	double exchange_rate_a2d = converters[0]->GetExchangeRate("A", "U") * converters[3]->GetExchangeRate("U", "D");
	double exchange_rate_a2e = converters[0]->GetExchangeRate("A", "U") * converters[4]->GetExchangeRate("U", "E");
	double exchange_rate_a2f = converters[0]->GetExchangeRate("A", "U") * converters[5]->GetExchangeRate("U", "F");
	double exchange_rate_a2g = converters[0]->GetExchangeRate("A", "U") * converters[6]->GetExchangeRate("U", "G");
	double exchange_rate_b2a = converters[1]->GetExchangeRate("B", "U") * converters[0]->GetExchangeRate("U", "A");
	double exchange_rate_b2c = converters[1]->GetExchangeRate("B", "U") * converters[2]->GetExchangeRate("U", "C");
	double exchange_rate_b2d = converters[1]->GetExchangeRate("B", "U") * converters[3]->GetExchangeRate("U", "D");
	double exchange_rate_b2e = converters[1]->GetExchangeRate("B", "U") * converters[4]->GetExchangeRate("U", "E");
	double exchange_rate_b2f = converters[1]->GetExchangeRate("B", "U") * converters[5]->GetExchangeRate("U", "F");
	double exchange_rate_b2g = converters[1]->GetExchangeRate("B", "U") * converters[6]->GetExchangeRate("U", "G");
	double exchange_rate_c2a = converters[2]->GetExchangeRate("C", "U") * converters[0]->GetExchangeRate("U", "A");
	double exchange_rate_c2b = converters[2]->GetExchangeRate("C", "U") * converters[1]->GetExchangeRate("U", "B");
	double exchange_rate_c2d = converters[2]->GetExchangeRate("C", "U") * converters[3]->GetExchangeRate("U", "D");
	double exchange_rate_c2e = converters[2]->GetExchangeRate("C", "U") * converters[4]->GetExchangeRate("U", "E");
	double exchange_rate_c2f = converters[2]->GetExchangeRate("C", "U") * converters[5]->GetExchangeRate("U", "F");
	double exchange_rate_c2g = converters[2]->GetExchangeRate("C", "U") * converters[6]->GetExchangeRate("U", "G");
	double exchange_rate_d2a = converters[3]->GetExchangeRate("D", "U") * converters[0]->GetExchangeRate("U", "A");
	double exchange_rate_d2b = converters[3]->GetExchangeRate("D", "U") * converters[1]->GetExchangeRate("U", "B");
	double exchange_rate_d2c = converters[3]->GetExchangeRate("D", "U") * converters[2]->GetExchangeRate("U", "C");
	double exchange_rate_d2e = converters[3]->GetExchangeRate("D", "U") * converters[4]->GetExchangeRate("U", "E");
	double exchange_rate_d2f = converters[3]->GetExchangeRate("D", "U") * converters[5]->GetExchangeRate("U", "F");
	double exchange_rate_d2g = converters[3]->GetExchangeRate("D", "U") * converters[6]->GetExchangeRate("U", "G");
	double exchange_rate_e2a = converters[4]->GetExchangeRate("E", "U") * converters[0]->GetExchangeRate("U", "A");
	double exchange_rate_e2b = converters[4]->GetExchangeRate("E", "U") * converters[1]->GetExchangeRate("U", "B");
	double exchange_rate_e2c = converters[4]->GetExchangeRate("E", "U") * converters[2]->GetExchangeRate("U", "C");
	double exchange_rate_e2d = converters[4]->GetExchangeRate("E", "U") * converters[3]->GetExchangeRate("U", "D");
	double exchange_rate_e2f = converters[4]->GetExchangeRate("E", "U") * converters[5]->GetExchangeRate("U", "F");
	double exchange_rate_e2g = converters[4]->GetExchangeRate("E", "U") * converters[6]->GetExchangeRate("U", "G");
	double exchange_rate_f2a = converters[5]->GetExchangeRate("F", "U") * converters[0]->GetExchangeRate("U", "A");
	double exchange_rate_f2b = converters[5]->GetExchangeRate("F", "U") * converters[1]->GetExchangeRate("U", "B");
	double exchange_rate_f2c = converters[5]->GetExchangeRate("F", "U") * converters[2]->GetExchangeRate("U", "C");
	double exchange_rate_f2d = converters[5]->GetExchangeRate("F", "U") * converters[3]->GetExchangeRate("U", "D");
	double exchange_rate_f2e = converters[5]->GetExchangeRate("F", "U") * converters[4]->GetExchangeRate("U", "E");
	double exchange_rate_f2g = converters[5]->GetExchangeRate("F", "U") * converters[6]->GetExchangeRate("U", "G");
	double exchange_rate_g2a = converters[6]->GetExchangeRate("G", "U") * converters[0]->GetExchangeRate("U", "A");
	double exchange_rate_g2b = converters[6]->GetExchangeRate("G", "U") * converters[1]->GetExchangeRate("U", "B");
	double exchange_rate_g2c = converters[6]->GetExchangeRate("G", "U") * converters[2]->GetExchangeRate("U", "C");
	double exchange_rate_g2d = converters[6]->GetExchangeRate("G", "U") * converters[3]->GetExchangeRate("U", "D");
	double exchange_rate_g2e = converters[6]->GetExchangeRate("G", "U") * converters[4]->GetExchangeRate("U", "E");
	double exchange_rate_g2f = converters[6]->GetExchangeRate("G", "U") * converters[5]->GetExchangeRate("U", "F");

	cout << "1A = " << exchange_rate_b2a << "B" << endl;
	cout << "1A = " << exchange_rate_c2a << "C" << endl;
	cout << "1A = " << exchange_rate_d2a << "D" << endl;
	cout << "1A = " << exchange_rate_e2a << "E" << endl;
	cout << "1A = " << exchange_rate_f2a << "F" << endl;
	cout << "1A = " << exchange_rate_g2a << "G" << endl;
	cout << "1B = " << exchange_rate_a2b << "A" << endl;
	cout << "1B = " << exchange_rate_c2b << "C" << endl;
	cout << "1B = " << exchange_rate_d2b << "D" << endl;
	cout << "1B = " << exchange_rate_e2b << "E" << endl;
	cout << "1B = " << exchange_rate_f2b << "F" << endl;
	cout << "1B = " << exchange_rate_g2b << "G" << endl;
	cout << "1C = " << exchange_rate_a2c << "A" << endl;
	cout << "1C = " << exchange_rate_b2c << "B" << endl;
	cout << "1C = " << exchange_rate_d2c << "D" << endl;
	cout << "1C = " << exchange_rate_e2c << "E" << endl;
	cout << "1C = " << exchange_rate_f2c << "F" << endl;
	cout << "1C = " << exchange_rate_g2c << "G" << endl;
	cout << "1D = " << exchange_rate_a2d << "A" << endl;
	cout << "1D = " << exchange_rate_b2d << "B" << endl;
	cout << "1D = " << exchange_rate_c2d << "C" << endl;
	cout << "1D = " << exchange_rate_e2d << "E" << endl;
	cout << "1D = " << exchange_rate_f2d << "F" << endl;
	cout << "1D = " << exchange_rate_g2d << "G" << endl;
	cout << "1E = " << exchange_rate_a2e << "A" << endl;
	cout << "1E = " << exchange_rate_b2e << "B" << endl;
	cout << "1E = " << exchange_rate_c2e << "C" << endl;
	cout << "1E = " << exchange_rate_d2e << "D" << endl;
	cout << "1E = " << exchange_rate_f2e << "F" << endl;
	cout << "1E = " << exchange_rate_g2e << "G" << endl;
	cout << "1F = " << exchange_rate_a2f << "A" << endl;
	cout << "1F = " << exchange_rate_b2f << "B" << endl;
	cout << "1F = " << exchange_rate_c2f << "C" << endl;
	cout << "1F = " << exchange_rate_d2f << "D" << endl;
	cout << "1F = " << exchange_rate_e2f << "E" << endl;
	cout << "1F = " << exchange_rate_g2f << "G" << endl;
	cout << "1G = " << exchange_rate_a2g << "A" << endl;
	cout << "1G = " << exchange_rate_b2g << "B" << endl;
	cout << "1G = " << exchange_rate_c2g << "C" << endl;
	cout << "1G = " << exchange_rate_d2g << "D" << endl;
	cout << "1G = " << exchange_rate_e2g << "E" << endl;
	cout << "1G = " << exchange_rate_f2g << "F" << endl;


// print exchange rate between any two in {A, B, C, D, E, F, G};
   
	return 0;
}