#include <iostream>
#include <string>
#include <vector>
bool IsPalindrom(const std::string &str) {
  if (str.empty()) return true;
  for (int i = 0; i < str.size() / 2; ++i) {
    if (str[i] != str[str.size() - 1 - i]) return false;
  }
  return true;
}
std::vector<std::string> PalindromFilter(const std::vector<std::string> &words, const int &minLength) {
  std::vector<std::string> answer;
  for (const std::string &w : words) {
    if (IsPalindrom(w) && w.size() >= minLength) answer.push_back(w);
  }
  return  answer;
}