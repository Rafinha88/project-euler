/* Largest prime factor
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <math.h>

bool isPrime(int number) {
	if (number % 2 == 0) {
		return false;
	}

	for (int i = 3; i < (int)sqrt(number); i+=2) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	std::cout << isPrime(101) << std::endl;;

	return 0;
}