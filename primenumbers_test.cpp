#define BOOST_TEST_MODULE primenumbers_test
#include <boost/test/included/unit_test.hpp>
#include "primenumbers.h"
using namespace std;

BOOST_AUTO_TEST_CASE(zeroorless)
{
	std::vector<int> expected;
	std::vector<int> recieved = primenumbers::primegenerator(0);
    BOOST_CHECK_EQUAL_COLLECTIONS(recieved.begin(),recieved.end(),expected.begin(),expected.end());	
}

BOOST_AUTO_TEST_CASE(fiveprimes)
{
	std::vector<int> expected = {2,3,5,7,11};
	std::vector<int> recieved = primenumbers::primegenerator(5);
    BOOST_CHECK_EQUAL_COLLECTIONS(recieved.begin(),recieved.end(),expected.begin(),expected.end());	
}
BOOST_AUTO_TEST_CASE(lessthanonedomainerror)
{
	BOOST_REQUIRE_THROW(primenumbers::primegenerator(-5), std::domain_error);
}
