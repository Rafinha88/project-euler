/* 10001st prime
 * By listing the firts prime numbers: 2, 3, 5, 7, 11, and 13,
 * we can see that the 6th prime is 13.
 *
 * What is the 10 001st prime number?
 */

#include <iostream>
#include <vector>

unsigned long int primeNumber(const int &position) {
	std::vector<unsigned long int> primeNumbers;

	unsigned long int number = 2;
	primeNumbers.push_back(number);

	number = 3;
	while (primeNumbers.size() < position) {
		bool isPrime = true;
		for (int i = 0; i < primeNumbers.size(); i++) {
			if (number % primeNumbers[i] == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			primeNumbers.push_back(number);
		}
		number = number + 2;
	}

	return primeNumbers.back();
}

int main() {

	const int position = 10001;
	std::cout << primeNumber(position) << std::endl;

	return 0;
}