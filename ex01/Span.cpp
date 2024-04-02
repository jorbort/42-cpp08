#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() {}

Span::Span(unsigned int n) : maxLen(n) {}
Span::Span(const Span &src) : maxLen(src.maxLen), numbers(src.numbers) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=(Span const &rhs) {
  if (this != &rhs) {
    maxLen = rhs.maxLen;
    numbers = rhs.numbers;
  }
  return *this;
}

std::ostream &operator<<(std::ostream &o, Span const &i) { return o; }

/*
** --------------------------------- METHODS ----------------------------------
*/
void Span::addNumber(int n) {
  if (numbers.size() + 1 == maxLen)
    throw maxElementsException();
  numbers.push_back(n);
}

void Span::addManyNumbers(std::vector<int>::iterator start,
                          std::vector<int>::iterator end) {
  if (numbers.size() + (unsigned int)(end - start) - 1 >= maxLen)
    throw maxElementsException();
  while (start != end) {
    numbers.push_back(*start);
    start++;
  }
}

unsigned int Span::shortestSpan(void) {
  if (numbers.size() < 2)
    throw minElementException();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
