/* Power digit sum
 *
 * 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 *
 * What is the sum of the digits of the number 2^1000 ?
 */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <math.h>

unsigned long long int powerDigitSum(const double &base, const double &expoent) {
	std::stringstream ss;
	ss << std::setprecision(0) << std::fixed << pow(base, expoent);
	std::string number = ss.str();
	
	unsigned long long int sum = 0;
	for(int i = 0; i < number.size(); i++) {
		sum += (int) number.at(i) - '0';
	}

	return sum;
}

int main() {

	const double base = 2.0;
	const double expoent = 1000.0;

	std::cout << powerDigitSum(base, expoent) << std::endl;

	return 0;
}