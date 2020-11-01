#include <iostream>
#include <set>
int main() {
  int N;
  std::string s;
  std::set<std::string> dictionary;
  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::cin >> s;
    dictionary.insert(s);
  }
  std::cout << dictionary.size() << std::endl;
  return 0;
}