#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() {}

Span::Span(unsigned int n) : maxLen(n) {}
Span::Span(const Span &src)
{
    numbers = src.numbers;
    maxLen = src.maxLen;
}

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

int Span::operator[](unsigned int index)
{
    if (numbers.size() <= index)
        throw std::out_of_range("index is out of bound of the span");
    return(numbers[index]);
}

std::ostream &operator<<(std::ostream &o, Span const &i) {
    (void)i;
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Span::addNumber(int n) {
  if (numbers.size() + 1 > maxLen)
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
std::vector<int> sorted(numbers);
std::sort(sorted.begin(), sorted.end());
unsigned int i = 1;
unsigned int res = static_cast<unsigned int>(sorted[i] - sorted[i -1]);
while (i < sorted.size())
{
    if ((unsigned int) (sorted[i] - sorted[i -1]) < res)
        res = static_cast<unsigned int>(sorted[i] - sorted[i -1]);
    i++;
}
    return (res);
}

unsigned int Span::longestSpan(void)
{
    if (numbers.size() < 2)
        throw minElementException();
    std::vector<int> sorted(numbers);
    std::sort(sorted.begin(),sorted.end());
    long int res =(unsigned int) (sorted[sorted.size() - 1] - sorted[0]);
    return (res);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
