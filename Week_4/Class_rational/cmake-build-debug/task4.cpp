/*#include <iostream>
#include <sstream>
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

std::istream &operator>>(std::istream &stream, Rational &r) {
  int temp_numeric, temp_denominator;
  char symbol;
  if (stream >> temp_numeric && stream >> symbol && stream >> temp_denominator) {
    if (symbol == '/') r = Rational(temp_numeric, temp_denominator);
    else r = Rational();
  }
  return stream;
}
std::ostream &operator<<(std::ostream &stream, Rational r) {
  int temp_numeric = r.Numerator(), temp_denominator = r.Denominator();
  stream << temp_numeric << '/' << temp_denominator;
  return stream;
}
// Р РµР°Р»РёР·СѓР№С‚Рµ РґР»СЏ РєР»Р°СЃСЃР° Rational РѕРїРµСЂР°С‚РѕСЂС‹ << Рё >>

int main() {
  {
    ostringstream output;
    output << Rational(-6, 8);
    if (output.str() != "-3/4") {
      cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
      return 1;
    }
  }

  {
    istringstream input("5/7");
    Rational r;
    input >> r;
    bool equal = r == Rational(5, 7);
    if (!equal) {
      cout << "5/7 is incorrectly read as " << r << endl;
      return 2;
    }
  }

  {
    istringstream input("");
    Rational r;
    bool correct = !(input >> r);
    if (!correct) {
      cout << "Read from empty stream works incorrectly" << endl;
      return 3;
    }
  }

  {
    istringstream input("5/7 10/8");
    Rational r1, r2;
    input >> r1 >> r2;
    bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
    if (!correct) {
      cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
      return 4;
    }

    input >> r1;
    input >> r2;
    correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
    if (!correct) {
      cout << "Read from empty stream shouldn't change arguments: " << r1 << " " << r2 << endl;
      return 5;
    }
  }

  {
    istringstream input1("1*2"), input2("1/"), input3("/4");
    Rational r1, r2, r3;
    input1 >> r1;
    input2 >> r2;
    input3 >> r3;
    bool correct = r1 == Rational() && r2 == Rational() && r3 == Rational();
    if (!correct) {
      cout << "Reading of incorrectly formatted rationals shouldn't change arguments: "
           << r1 << " " << r2 << " " << r3 << endl;

      return 6;
    }
  }
  {
    istringstream input("");
    Rational r(2, 3);
    input >> r;
    bool equal = r == Rational(2, 3);
    if (!equal) {
      cout << "кривое чтение из пустого потока" << endl;
      return 12;
    }
  }
  cout << "OK" << endl;
  return 0;
}*/