/* Sum square difference
 *
 * The sum of the squares of the first ten natural numbers is,
 * 1^2 + 2^2 + ... 10^2 = 385
 *
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025
 *
 * Hence the difference between the sum of the squares of the first ten natural numbers
 * and the square of the sum is 3025 - 385 = 2660.
 *
 * Find the difference between the sum of the squares of the first one hundred natural numbers
 * and the square of the sum.
 */

#include <iostream>
#include <math.h>

int main() {

	const unsigned long int limit = 100;
	unsigned long int sumOfSquares = 0;
	unsigned long int squareOfSum = 0;
	
	sumOfSquares = limit * (limit + 1) / 2;
	sumOfSquares = pow(sumOfSquares, 2);

	squareOfSum = (2 * limit + 1) * (limit + 1) * limit / 6;

	std::cout << sumOfSquares - squareOfSum << std::endl;

	return 0;
}