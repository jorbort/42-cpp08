#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	std::vector<int>::iterator it;

	for (int i = 0; i < 10; ++i) 
		v.push_back(i * i);
	std::cout << "Vector:" << std::endl;
	
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) 
		std::cout << *i << std::endl;
	std::cout << std::endl;
	
	try
	{
		it = easyfind(v, -3);
		std::cout << "iterator: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		it = easyfind(v, 2);
		std::cout << "iterator: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		it = easyfind(v, 25);
		std::cout << "iterator: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		it = easyfind(v, 81);
		std::cout << "iterator: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}