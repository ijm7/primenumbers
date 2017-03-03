#include <iostream>
#include "primenumbers.h"

int main()
{
	int a;
	std::vector<int> primelist;
	std::cout << "Please enter the number that you would like to generate the table with: ";
	std::cin >> a;
	std::cout << std::endl;
	primelist = primenumbers::primegenerator(a);
	primenumbers::primenumbers::tableprinter(primelist);
	return 0;
}
