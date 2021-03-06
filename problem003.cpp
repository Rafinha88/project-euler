/* Largest prime factor
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <math.h>
#include <stdint.h>

int64_t largestPrimeFactor(const int64_t &tnumber) {
	int64_t lastFactor;
	int64_t number = tnumber;

	if (number % 2 == 0) {
		lastFactor = 2;
		while (number % 2 == 0) {
			number = number / 2;
		}
	} else {
		lastFactor = 1;
	}
	
	int64_t maxFactor = (int64_t) sqrt(number);
	
	for (int64_t factor = 3; factor <= maxFactor; factor = factor + 2) {
		if (number % factor == 0) {
			number = number / factor;
			lastFactor = factor;
			while (number % factor == 0) {
				number = number / factor;
			}
			maxFactor = (int64_t) sqrt(number);
		}
	}
	
	if (number == 1) {
		return lastFactor;
	} else {
		return number;
	}
}

int main() {

	int64_t number = 600851475143;
	std::cout << largestPrimeFactor(number) << std::endl;

	return 0;
}