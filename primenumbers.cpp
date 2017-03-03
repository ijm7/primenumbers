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
	
}
