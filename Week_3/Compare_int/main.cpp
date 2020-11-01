#include <iostream>
#include <vector>
#include <algorithm>
int main() {
  std::vector<int> numbers;
  int N;
  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    int n;
    std::cin >> n;
    numbers.push_back(n);
  }
  std::sort(numbers.begin(), numbers.end(), [](int i, int j) { return std::abs(i) < std::abs(j); });
  for (const auto &v:numbers) {
    std::cout << v << ' ';
  }
  return 0;
}