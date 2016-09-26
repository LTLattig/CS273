#include <iostream>
#include <string>
#include <stdexcept>  // Needed for exceptions
#include <limits>     // Needed for limits of system values

using namespace std;

/**
*	Divides x by y
*	@pre y != 0 && x > 0   (this is the pre-condition for this function)
*	@param x	dividend
*	@param y 	divisor
*	@return x divided by y
*/
double division(double x, double y) {
	if (y == 0)
		throw invalid_argument("Cannot divide by 0. Please use a non-zero denomitnator.");
	if (x <= 0)
		throw out_of_range("numerator must be greater than 0");
	return x / y;
}

int main() {
	double input_x, input_y;
	do {
		try{
		cout << "Enter a numerator: ";
		cin >> input_x;
		cout << "Enter a denominator: ";
		cin >> input_y;
		cout << "Result of division is " << division(input_x, input_y) << endl;
		}
		catch (out_of_range& ex)
		{
			cout << ex.what() << " Try again." << endl;
		}
		catch (invalid_argument& ex)
		{
			cout << "geeeeet ouuuuuut" << endl;
			exit(0);
		}
	} while (true);
}