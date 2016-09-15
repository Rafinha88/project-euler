/* Summation of Primes
 *
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 * Find the sum of all the primes below two million.
 */

#include <iostream>
#include <vector>

unsigned long int sumOfPrimes(const long int &limit) {
	
	std::vector<unsigned long int> primeNumbers;

	unsigned long int number = 2;
	primeNumbers.push_back(number);
	
	unsigned long int sum = 0;
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

	return sum;
}

int main() {

	const long int limit = 2000000;
	std::cout << sumOfPrimes(limit) << std::endl;

	return 0;
}