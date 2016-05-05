/* Large sum
 *
 * Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
 *
 * largeSum.txt
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {

	unsigned long long int sum = 0.0;

	ifstream myfile("largeSum.txt");
	if (myfile.is_open()) {
		for (int i = 0; i < 100; i++) {
			string line;			
			getline(myfile, line);
			string number = line.substr(0, 11);

			unsigned long long int temp1 = 0.0;
			stringstream(number) >> temp1;
			sum += temp1;

		}
		myfile.close();
	} else {
		cout << "Unable to open file";
	}

	stringstream ss;
	ss << sum;
	string result = ss.str();
	cout << result.substr(0, 10) << endl;
	
	return 0;
}