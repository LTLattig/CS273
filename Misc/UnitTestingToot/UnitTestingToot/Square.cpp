#include "Square.h"

	bool isSquare(int a, int b, int c, int d) {
		if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
			return false;
		else if (a == b && b == c && c == d)
			return true;
		return false;
}
	//test cases: all sides a,, b, c, d are equal: returns true\
		test if sides are negative: returns false\
		test if sides are zero: returns false\