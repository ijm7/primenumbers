#include "primenumbers.h"

primenumbers::primenumbers()
{
}

std::vector<int> primenumbers::primegenerator(int n)
{
	std::vector<int> primelist;
	int checker=1;
	int nextprime=3; //will be added to primelist when it contains the next prime
	if (n>=1) //primelist will be empty if user hasn't asked for atleast n=1
	{
		primelist.push_back(2); //Adds initial prime
		for (int i=2;i<=n;)
		{
			for (int j=2; j<= sqrt(nextprime);j++)
			{
				if (nextprime%j==0)
				{
					checker=0;
					break;
				}
			}
			if (checker!=0)
			{
				primelist.push_back(nextprime);
				i++;
			}
			checker=1;
			nextprime++;
		}
	}
	else
	{
		throw std::domain_error("Number entered is less than one");
	}
	return primelist;
}

void primenumbers::tableprinter(const std::vector<int> &primes)
{
	std::cout << "\t|";
	for (int i=0;i<primes.size();i++)
	{
		std::cout << primes.at(i) << "\t|";
	}
	std::cout << std::endl;
	for (int j=0;j<primes.size();j++)
	{
		std::cout << primes.at(j) << "\t|";
		
		for (int k=0;k<primes.size();k++)
		{
			std::cout << primes.at(j) * primes.at(k) << "\t|";
		}
		std::cout << std::endl;
	}	
}
