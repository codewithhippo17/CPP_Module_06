#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter {
private:
  
public:
  ScalarConverter();
  ScalarConverter(const ScalarConverter &other);
  ScalarConverter &operator=(const ScalarConverter &other);
  ~ScalarConverter();
};

static Scalar convert(const std::string& literal);
#endif // SCALARCONVERTER_HPP
