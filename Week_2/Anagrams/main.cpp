#include <iostream>
#include <map>

std::map<char, int> BuildCharCounters(const std::string &str) {
  std::map<char, int> counter;
  for (auto s:str) ++counter[s];
  return counter;
}
int main() {
  int N;
  std::string first_word, second_word;
  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::cin >> first_word >> second_word;
    if (BuildCharCounters(first_word) == BuildCharCounters(second_word)) std::cout << "YES\n";
    else std::cout << "NO\n";
  }
  return 0;
}