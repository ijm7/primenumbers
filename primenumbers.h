#ifndef primenumbers_H
#define primenumbers_H
#include <vector>
#include <iostream>
#include <exception>

class primenumbers
{
private:
	primenumbers();
public:
	static std::vector<int> primegenerator(int n);
	static void tableprinter(const std::vector<int> &primes);
};
#endif
