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

unsigned long int sumOfSquares(const int &limit) {
	unsigned long int sumOfSquares = 0;
	sumOfSquares = limit * (limit + 1) / 2;
	sumOfSquares = pow(sumOfSquares, 2);
	return sumOfSquares;
}

unsigned long int squareOfSum(const int &limit) {
	unsigned long int squareOfSum = 0;
	squareOfSum = (2 * limit + 1) * (limit + 1) * limit / 6;
	return squareOfSum;
}

int main() {

	const int limit = 100;
	
	//std::cout << sumOfSquares(limit) << std::endl;
	//std::cout << squareOfSum(limit) << std::endl;
	std::cout << sumOfSquares(limit) - squareOfSum(limit) << std::endl;

	return 0;
}