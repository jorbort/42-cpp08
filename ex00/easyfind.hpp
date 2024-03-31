#pragma once
#include <stdexcept>

template <typename T> 
typename T::iterator easyfind(T &cont, int tofind);
class numberNotFounfexception : public std::exception
{
	public:
	virtual const char *what() const throw()
	{
		return ("number not found");
	}
};
#include "easyfind.tpp"