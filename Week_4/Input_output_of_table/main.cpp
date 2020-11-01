#include <iostream>
#include <fstream>
#include <iomanip>
int main() {
  std::ifstream input("input.txt");

  if (input) {
    int n, m;
    input >> n >> m;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        int el;
        input >> el;
        input.ignore(1);
        std::cout << std::setw(10) << el;
        if (j != m - 1) std::cout << ' ';
      }
      if (i != n - 1) std::cout << '\n';
    }
  }
  return 0;
}