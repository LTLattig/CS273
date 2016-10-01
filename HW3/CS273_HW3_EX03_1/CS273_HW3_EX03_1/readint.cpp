#include <stdexcept>
#include <iostream>
#include <limits>
#include <ios>
#include "readint.h"



// gonna need to edit this, but first I need to understand the code. [EDIT] I think I've got it now.
int read_int(const std::string &prompt, int low, int high)
{
	std::cin.exceptions(std::ios_base::failbit);
	int num = 0; 
	while (true)
	{
		try {
			std::cout << prompt;
			std::cin >> num;
			if (num < low || num > high)
				throw std::range_error("");
			return num;
		}
		catch (std::ios_base::failure& ex) {
			std::cout << "Bad numeric string -- give it another go.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n'); // skips over data on current data line (?)
		}
		catch (std::range_error& rng)
		{
			std::cout << "The number you entered was out of the range you specified.\nPlease try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		}
	}
}
