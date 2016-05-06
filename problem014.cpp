/* Longest Collatz sequence
 *
 * The following iterative sequence is defined for the set of positive integers:
 *
 * n -> n / 2 (n is even)
 * n -> 3n + 1 (n is odd)
 *
 * Using the rule above and starting with 13, we generate the following sequence:
 * 13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
 *
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
 * Although it has not been proved yet (Collatz Problem),
 * it is thought that all starting numbers finish at 1.
 *
 * Which  starting number, under one million, produces the longest chain?
 *
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 */

#include <iostream>

using namespace std;

int main() {
	
	unsigned long long int startingNumber;
	unsigned long long int number;
	int longestChain = 0;

	for (int i = 1000000; i > 1; i--) {
		int chain = 1;
		number = i;
		while (number != 1) {
			if (number % 2 == 0) {
				number = number / 2;
			} else {
				number = 3 * number + 1;
			}
			chain++;
		}

		if (chain > longestChain) {
			longestChain = chain;
			startingNumber = i;
		}
	}

	cout << startingNumber << endl;

	return 0;
}