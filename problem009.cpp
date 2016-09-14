/* Special Pythagorean triplet
 *
 * A Pythagorean triplet is a set of three natural numbers, a < b < c,
 * for which, aˆ2 + b^2 = c^2
 *
 * For example, 3ˆ2 + 4^2 = 9 + 16 = 25 = 5ˆ2.
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <iostream>

int pythagoreanTriplet(const int &sum) {
	for (int a = 1; a < sum / 3; a++) {
		for (int b = a + 1; b < sum / 2; b++) {
			int c = sum - a - b;
			if ( a * a + b * b == c * c) {
				// std::cout << a << " + " << b << " + " << c << " = " << a + b + c << std::endl;
				return a * b * c;
			}
		}
	}
	return 0;
}

int main() {

	const int sum = 1000;

	std::cout << pythagoreanTriplet(sum) << std::endl;
	
	return 0;
}