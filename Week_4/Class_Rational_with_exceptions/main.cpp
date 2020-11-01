#include <iostream>
#include <exception>
#include <numeric>
using namespace std;

class Rational {
 public:
  Rational() {
    // Реализуйте конструктор по умолчанию
    numerator_ = 0;
    denominator_ = 1;
    divider = 1;
  }

  Rational(int numerator, int denominator) {
    // Реализуйте конструктор
    if (denominator == 0) {
      throw invalid_argument("Denominator should be non zero!");
    }
    if (numerator > 0 && denominator > 0) {
      numerator_ = numerator;
      denominator_ = denominator;
    } else if (numerator < 0 && denominator < 0) {
      numerator_ = -numerator;
      denominator_ = -denominator;
    } else if (numerator > 0 && denominator < 0) {
      numerator_ = -numerator;
      denominator_ = -denominator;
    } else if (numerator == 0) {
      numerator_ = numerator;
      denominator_ = 1;
    } else {
      numerator_ = numerator;
      denominator_ = denominator;
    }
    divider = std::gcd(numerator_, denominator_);
  }

  int Numerator() const {
    // divider=std::fabs(std::gcd(numerator_,denominator_));
    return numerator_ / divider;
    // Реализуйте этот метод
  }

  int Denominator() const {
    return denominator_ / divider;
    // Реализуйте этот метод
  }

 private:
  int divider;
  int numerator_;
  int denominator_;
  // Добавьте поля
};

Rational operator/(const Rational &lhs, const Rational &rhs) {
  if (rhs.Numerator() == 0) {
    throw domain_error("Zero division!");
  }
  return Rational(lhs.Numerator() * rhs.Denominator(), lhs.Denominator() * rhs.Numerator());
}

int main() {
  try {
    Rational r(1, 0);
    cout << "Doesn't throw in case of zero denominator" << endl;
    return 1;
  } catch (invalid_argument &) {
  }

  try {
    auto x = Rational(1, 2) / Rational(0, 1);
    cout << "Doesn't throw in case of division by zero" << endl;
    return 2;
  } catch (domain_error &) {
  }

  cout << "OK" << endl;
  return 0;
}