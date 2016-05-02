/* Summation of Primes
 *
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 * Find the sum of all the primes below two million.
 */

#include <iostream>
#include <vector>

int main() {

	const long int limit = 2000000;
	unsigned long int sum = 0;
	std::vector<unsigned long int> primeNumbers;

	unsigned long int number = 2;
	primeNumbers.push_back(number);
	sum = sum + 2;

	number = 3;
	while (number < limit) {
		bool isPrime = true;
		for (int i = 0; i < primeNumbers.size(); i++) {
			if (number % primeNumbers[i] == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			primeNumbers.push_back(number);
			sum = sum + number;
		}
		number = number + 2;
	}

	std::cout << sum << std::endl;

	return 0;
}