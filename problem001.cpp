/* Multiples of 3 and 5
 * 
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <iostream>
#include <set>

int multiples(const std::set<int> &myset, const int &limit) {
	int sum = 0;
	for (int i = 0; i < limit; i++) {
		for (std::set<int>::iterator it = myset.begin(); it != myset.end(); it++) {
			if (i % *it == 0) {
				sum += i;
				break;
			}
 		}
	}
	return sum;
}

int main() {
	
	int myints[] = {3, 5};
	std::set<int> myset (myints, myints + 2);
	int limit = 1000;
	
	std::cout << multiples(myset, limit) << std::endl;

	return 0;
}