#include <iostream>
#include <algorithm>
class ReversibleString {
 public:
  ReversibleString(const std::string &str) {
    string_ = str;
  }
  ReversibleString() {}
  void Reverse() {
    std::reverse(string_.begin(), string_.end());
  }
  std::string ToString() const {
    return string_;
  }
 private:
  std::string string_;
};
int main() {
  ReversibleString s("live");
  s.Reverse();
  std::cout << s.ToString() << std::endl;

  s.Reverse();
  const ReversibleString& s_ref = s;
  std::string tmp = s_ref.ToString();
  std::cout << tmp << std::endl;

  ReversibleString empty;
  std::cout << '"' << empty.ToString() << '"' << std::endl;

  return 0;
}