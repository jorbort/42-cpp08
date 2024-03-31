#include <algorithm>

template<typename T>

typename T::iterator easyfind(T& cont, int toFind)
{
	typename T::iterator iter = std::find(cont.begin(), cont.end(), toFind);
	if (iter == cont.end())
		throw numberNotFounfexception();
	return (iter);
}
