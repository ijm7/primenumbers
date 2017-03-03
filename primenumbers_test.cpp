#define BOOST_TEST_MODULE primenumbers_test
#include <boost/test/included/unit_test.hpp>
#include "primenumbers.h"

using namespace std;

BOOST_AUTO_TEST_CASE(fiveprimes)
{
	std::vector<int> expected = {2,3,5,7,11};
	std::vector<int> recieved = primenumbers::primegenerator(5);
    BOOST_CHECK_EQUAL_COLLECTIONS(recieved.begin(),recieved.end(),expected.begin(),expected.end());	
}

BOOST_AUTO_TEST_CASE(twentyfiveprimes)
{
	std::vector<int> expected = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	std::vector<int> recieved = primenumbers::primegenerator(25);
    BOOST_CHECK_EQUAL_COLLECTIONS(recieved.begin(),recieved.end(),expected.begin(),expected.end());	
}

BOOST_AUTO_TEST_CASE(lessthanonedomainerror)
{
	BOOST_REQUIRE_THROW(primenumbers::primegenerator(-5), std::domain_error);
}

BOOST_AUTO_TEST_CASE(zerodomainerror)
{
	BOOST_REQUIRE_THROW(primenumbers::primegenerator(0), std::domain_error);
}
