#include <iostream>
#include <vector>
#include <algorithm>
int main() {
  int N;
  std::vector<std::string> strings;
  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::string str;
    std::cin >> str;
    strings.push_back(str);
  }
  std::sort(strings.begin(), strings.end(), [](std::string &s1, std::string &s2) {
    std::string result1, result2;
    for (auto &i:s1) {
      result1 += std::tolower(i);
    }
    for (auto &j:s2) {
      result2 += std::tolower(j);
    }
    return result1 < result2;
  });
  for (const auto &v:strings) {
    std::cout << v << ' ';
  }
  return 0;
}