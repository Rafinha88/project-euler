/* Smallest multiple
 *
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10
 * without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the numbers
 * from 1 to 20?
 */

#include <iostream>
#include <math.h>

int main() {

	const int MAX_RANGE = 20;
	int primeFactorsExponent[MAX_RANGE + 1] = {0};
	int numbers[MAX_RANGE];
	for (int i = 0; i < MAX_RANGE; i++) {
		numbers[i] = i + 1;
	}

	int factor = 2;
	for (int i = 1; i < log2(MAX_RANGE); i++) {
		for (int j = 0; j < MAX_RANGE; j++) {
			if (numbers[j] % factor == 0) {
				numbers[j] = numbers[j] / factor;
			}
		}
		primeFactorsExponent[factor]++;
	}

	factor = 3;
	while (factor <= MAX_RANGE) {
		bool divided = false;
		for (int i = 0; i < MAX_RANGE; i++) {
			
			if (numbers[i] % factor == 0) {
				numbers[i] = numbers[i] / factor;
				divided = true;
			}
		}
		if (divided) {
			primeFactorsExponent[factor]++;
		} else {
			factor = factor + 2;
		}
	}

	int result = 1;
	for (int base = 0; base <= MAX_RANGE; base++) {
		result = result * pow(base, primeFactorsExponent[base]);
	}
	std::cout << result << std::endl;

	return 0;
}