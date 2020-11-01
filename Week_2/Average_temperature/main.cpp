#include <iostream>
#include <vector>
void PrintVector(const std::vector<int> &v) {
  for (auto i : v) {
    std::cout << i << ' ';
  }
}
int main() {
  int n, averageTemperature = 0, counter = 0;
  std::cin >> n;
  std::vector<int> v, position;
  for (int i = 0; i < n; ++i) {
    int t;
    std::cin >> t;
    v.push_back(t);
    averageTemperature += t;
  }
  averageTemperature /= n;
  for (int i = 0; i < n; ++i) {
    if (v[i] > averageTemperature) {
      position.push_back(i);
      ++counter;
    }
  }
  std::cout << counter << std::endl;
  PrintVector(position);
  return 0;
}