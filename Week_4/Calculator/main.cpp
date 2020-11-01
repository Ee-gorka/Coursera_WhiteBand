#include <iostream>
#include <numeric>
#include <exception>
#include <sstream>
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
      throw invalid_argument("Invalid argument");
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

bool operator==(const Rational &lhs, const Rational &rhs) {
  return lhs.Numerator() == rhs.Numerator() && lhs.Denominator() == rhs.Denominator();
}
Rational operator*(const Rational &lhs, const Rational &rhs) {
  return Rational(lhs.Numerator() * rhs.Numerator(), lhs.Denominator() * rhs.Denominator());
}
Rational operator/(const Rational &lhs, const Rational &rhs) {
  if (rhs.Numerator() == 0) {
    throw domain_error("Division by zero");
  }
  return Rational(lhs.Numerator() * rhs.Denominator(), lhs.Denominator() * rhs.Numerator());
}
Rational operator-(const Rational &lhs, const Rational &rhs) {
  int temp_numerator = lhs.Numerator() * rhs.Denominator() - rhs.Numerator() * lhs.Denominator();
  int temp_denominator = lhs.Denominator() * rhs.Denominator();
  return Rational(temp_numerator, temp_denominator);
}
Rational operator+(const Rational &lhs, const Rational &rhs) {
  int temp_numerator = lhs.Numerator() * rhs.Denominator() + rhs.Numerator() * lhs.Denominator();
  int temp_denominator = lhs.Denominator() * rhs.Denominator();
  return Rational(temp_numerator, temp_denominator);
}
std::istream &operator>>(std::istream &stream, Rational &r) {
  int temp_numeric, temp_denominator;
  char symbol;
  if (stream >> temp_numeric && stream >> symbol && stream >> temp_denominator) {
    if (symbol == '/') r = Rational(temp_numeric, temp_denominator);
    else r = Rational();
  }
  return stream;
}
std::ostream &operator<<(std::ostream &stream, const Rational &r) {
  int temp_numeric = r.Numerator(), temp_denominator = r.Denominator();
  stream << temp_numeric << '/' << temp_denominator;
  return stream;
}
// РІ РєР°С‡РµСЃС‚РІРµ РєР»СЋС‡Р° map'Р° Рё СЌР»РµРјРµРЅС‚Р° set'Р°
bool operator<(const Rational &lhs, const Rational &rhs) {
  return (lhs.Numerator() / (double) lhs.Denominator()) < (rhs.Numerator() / (double) rhs.Denominator());
}
Rational GetRational(const string &s) {
  stringstream ss(s);
  Rational r;
  ss >> r;
  return r;
}
int main() {
  string lhs_string, rhs_string;
  char operation;
  std::cin >> lhs_string >> operation >> rhs_string;
  try {
    Rational lhs = GetRational(lhs_string);
    Rational rhs = GetRational(rhs_string);
    operation == '+' ? cout << lhs + rhs :

    operation == '-' ? cout << lhs - rhs :

    operation == '*' ? cout << lhs * rhs :

    cout << lhs / rhs;
  } catch (exception &ex) {
    cout << ex.what();
  }
  return 0;
}