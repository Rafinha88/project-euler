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

int main() {
	
	std::stringstream ss;
	ss << std::setprecision(0) << std::fixed << pow(2.0, 1000.0);
	std::string number = ss.str();
	
	unsigned long long int sum = 0;
	for(int i = 0; i < number.size(); i++) {
		sum += (int) number[i] - '0';
	}

	std::cout << sum << std::endl;

	return 0;
}