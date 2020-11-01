#include <iostream>
#include <string>
bool IsPalindrom(const std::string &str) {
  if (str.empty()) return true;
  for (int i = 0; i < str.size() / 2; ++i) {
    if (str[i] != str[str.size() - 1 - i]) return false;
  }
  return true;
}