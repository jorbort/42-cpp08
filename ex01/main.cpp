#include "Span.hpp"

void test42(void)
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void otherTests(void)
{
    std::cout <<  "TRYING MAX INT MIN INT CASE" << std::endl;
	Span sp = Span(5);
	sp.addNumber(2147483647);
	sp.addNumber(-2147483648);
	std::cout <<  "LongestSpan: " << sp.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << sp.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING SPAN of 10000" << std::endl;
	Span tenthousands = Span(10000);
	for (int i = 0; i < 10000; i++)
		tenthousands.addNumber(i);
	std::cout <<  "LongestSpan: " << tenthousands.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << tenthousands.shortestSpan() << std::endl;
	std::cout << std::endl;

	std::cout <<  "SEARCH RESULTS FROM AN EMPTY SPAN" << std::endl;
	Span spexception(3);
	try
	{
		std::cout <<  "LongestSpan: " << spexception.longestSpan() << std::endl;
		std::cout <<  "ShorterSpan: " << spexception.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<  "SEARCH RESULTS FROM A SPAN WHITH ONLY ONE NUMBER" << std::endl;
	spexception.addNumber(1);
	try
	{
		std::cout <<  "LongestSpan: " << spexception.longestSpan() << std::endl;
		std::cout <<  "ShorterSpan: " << spexception.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	spexception.addNumber(1);
	spexception.addNumber(1);
	std::cout <<  "TRY ADD ONE MORE NUMBER THAN MAX" << std::endl;
	try
	{
		spexception.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
    test42();
    otherTests();
    return 0;
}
