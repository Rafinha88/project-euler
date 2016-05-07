/* Lattice paths
 *
 * Starting in the top left corner of a 2 x 2 grid, and only being able to move
 * to the right and down, there are exactly 6 routes to the bottom right corner.
 *
 * 1: R R D D
 * 2: R D R D
 * 3: R D D R
 * 4: D R R D
 * 5: D R D R
 * 6: D D R R
 *
 * How many such routes are there through a 20 x 20 grid?
 */

#include <iostream>
#include <iomanip>

using namespace std;

double factorial(double n) {
	double product = 1.0;
	for (int i = n; i > 1; i--) {
		product *= i;
	}
	return product;
}

int main() {
	
	// Binomial coefficcient (n k): n! / (k! * (n - k)!)
	//
	// (4 2): 4! / (2! * (4 - 2)!) = 2 * 3 = 6.
	//
	// (40 20): 40! / (20! (40 - 20)!) = (40 * 39 * ... * 21) / 20! =

	cout << setprecision(0) << fixed << factorial(40) / (factorial(20) * factorial(20)) << endl;

	return 0;
}