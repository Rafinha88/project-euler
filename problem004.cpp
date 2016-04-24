/* Largest palindrome product
 *
 * A palindromic number reads the same both ways. The largest palindrome palindrome made
 * from the product of two 2-digit numbers is 9009 = 91 x 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <iostream>
#include <vector>

int reverse(int number) {
	int reversed = 0;
	while (number > 0) {
		reversed = 10 * reversed + number % 10;
		number = number / 10;
	}
	return reversed;
}

bool isPalindrome(int number) {
	return number == reverse(number);
}

int main() {

	int largestPalindrome = 0;
	int a = 999;
	while (a >= 100) {
		int b = 999;
		while (b >= a) {
			if (a * b <= largestPalindrome) {
				break;
			}
			if (isPalindrome(a * b) ) {
				largestPalindrome = a * b;
			}
			b--;
		}
		a--;
	}

	std::cout << largestPalindrome << std::endl;

	return 0;
}