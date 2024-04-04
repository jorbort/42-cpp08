#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>

class Span {
private:
  Span();
  std::vector<int> numbers;
  unsigned int maxLen;

public:
  Span(unsigned int n);
  Span(Span const &src);
  ~Span();
  Span &operator=(Span const &rhs);
  int operator[](unsigned int index);

  class maxElementsException : public std::exception {
    virtual const char *what() const throw() {
      return ("the span is full cannot allocate anymore numbers on it");
    }
  };

  class minElementException : public std::exception {
    virtual const char *what() const throw() {
      return ("the span must contain at least two ints to calculate the span between them ");
    }
  };

  void addNumber(int n);
  void addManyNumbers(std::vector<int>::iterator first,
                      std::vector<int>::iterator last);
  unsigned int shortestSpan(void);
  unsigned int longestSpan(void);
};

std::ostream &operator<<(std::ostream &o, Span const &i);

#endif
