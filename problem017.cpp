/* Number letter counts
 *
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five,
 * then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words,
 * how many letters would be used?
 *
 * NOTE: Dot not count spaces or hyphens. For example, 342 (three hundred and forty-two)
 * contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
 * The use of "and" when writing out numbers is in compilance with Britsh usage.
 *
 * Solution following http://www.wikihow.com/Write-Numbers-in-Words
 */

#include <iostream>
#include <string>
#include <sstream>

static std::string fromOneToNine[] = {
		"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"
	};

static std::string fromTenToNineteen[] = {
		"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sexteen", "seventeen", "eighteen", "nineteen"
	};

static std::string tensFromTwentyToNinety[] = {
		"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
	};

std::string combineWords(int number) {
	std::stringstream ss;
	if (number % 100 > 9 && number % 100 < 20) {
		ss << fromTenToNineteen[number % 100 - 10];
	} else {
		int tens = number % 100 / 10;
		int ones = number % 10;
		if (tens != 0) {
			ss << tensFromTwentyToNinety[tens - 2];
		}
		if (tens != 0 && ones != 0) {
			ss << '-';
		}
		if (ones != 0) {
			ss << fromOneToNine[ones - 1];
		}
	}
	return ss.str();
}

std::string countByHundreds(int number) {
	std::stringstream ss;
	int hundreds = number / 100;
	if (hundreds != 0) {
		ss << fromOneToNine[hundreds - 1];
		ss << " hundred ";
		if (number % 100 != 0) {
			ss << "and ";
		}
	}
	return ss.str();
}

std::string writeNumber(int number) {
	std::stringstream ss;
	ss << countByHundreds(number);
	ss << combineWords(number);
	return ss.str();
}

int countLetters(std::string words) {
	int letters = 0;
	for (int i = 0; i < words.size(); i++) {
		if (words[i] != ' ' && words[i] != '-') {
			letters++;
		}
	}
	return letters;
}

int main() {

	int sum = 0;
	for (int i = 1; i < 1000; i++) {
		std::string number = writeNumber(i);
		sum += countLetters(number);
	}
	sum += countLetters("one thousand");

	std::cout << sum << std::endl;

	return 0;
}