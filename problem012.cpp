/* Highly divisible triangular number
 *
 * The sequence of triangle numbers is generated by adding the natural numbers.
 * So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28.
 * The first ten terms would be:
 * 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
 *
 * Let us list the factors of the first seven triangle numbers:
 *  1:	1
 *  3:	1, 3
 *  6:	1, 2, 3, 6
 * 10:	1, 2, 5, 10
 * 15:	1, 3, 5, 15
 * 21:	1, 3, 7, 21
 * 28:	1, 2, 4, 7, 14, 28
 *
 * We can see that 28 is the first triangular number to have over five divisors.
 * What is the value of the first triangle number to have over five hundred divisors?
 */

#include <iostream>
#include <vector>
#include <math.h>

unsigned long int triangularNumberDivisor(const int &divisors) {

	unsigned int n = 1;
	unsigned long int triangleNumber = n * (n + 1) / 2;

	std::vector<unsigned int> factors;
	while (factors.size() <= divisors / 2) {
		factors.clear();
		triangleNumber = n * (n + 1) / 2;

		for (int i = 1; i <= sqrt(triangleNumber); i++) {
			if (triangleNumber % i == 0) {
				factors.push_back(i);
			}
		}

		n++;
	}

	return triangleNumber;
}

int main() {
	
	const int divisors = 500;
	std::cout << triangularNumberDivisor(divisors) << std::endl;

	return 0;
}