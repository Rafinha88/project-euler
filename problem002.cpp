/* Even Fibonacci numbers
 *
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms.
 * By starting with 1 and 2, the first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million,
 * find the sum of the even-valued terms.
 */

#include <iostream>

int evenFibonacciSum(const int &exceedTerm) {
	int sum = 0;
	int term1 = 1;
	int term2 = 2;
	int temp;

	while (term2 < exceedTerm) {
		if (term2 % 2 == 0) {
			sum += term2;
		}
		temp = term2;
		term2 = term2 + term1;
		term1 = temp;
	}
	return sum;
}

int main() {

	std::cout << evenFibonacciSum(4000000) << std::endl;

	return 0;
}