#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
  *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
  if (this != &other) {
    // TODO: copy members
  }
  return (*this);
}

ScalarConverter::~ScalarConverter() {
}
