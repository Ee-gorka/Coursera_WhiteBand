/*#include <iostream>
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
    if (numerator % denominator == 0) {
      numerator_ = numerator / denominator;
      denominator_ = 1;
    } else if (numerator > 0 && denominator > 0) {
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
};

bool operator==(const Rational &lhs, const Rational &rhs) {
  return lhs.Numerator() == rhs.Numerator() && lhs.Denominator() == rhs.Denominator();
}

Rational operator*(const Rational &lhs, const Rational &rhs){
  return Rational(lhs.Numerator()*rhs.Numerator(),lhs.Denominator()*rhs.Denominator());
}
Rational operator/(const Rational &lhs, const Rational &rhs){
  return Rational(lhs.Numerator()*rhs.Denominator(),lhs.Denominator()*rhs.Numerator());
}
int main() {
  {
    Rational a(2, 3);
    Rational b(4, 3);
    Rational c = a * b;
    bool equal = c == Rational(8, 9);
    if (!equal) {
      cout << "2/3 * 4/3 != 8/9" << endl;
      return 1;
    }
  }

  {
    Rational a(5, 4);
    Rational b(15, 8);
    Rational c = a / b;
    bool equal = c == Rational(2, 3);
    if (!equal) {
      cout << "5/4 / 15/8 != 2/3" << endl;
      return 2;
    }
  }

  cout << "OK" << endl;
  return 0;
}*/