#include <iostream>
#include <fstream>
#include <iomanip>
int main() {
  std::ifstream input("input.txt");
  double n;
  if (input) {
    while (input >> n) {
      std::cout << std::fixed << std::setprecision(3);
      std::cout << n << '\n';
    }
  }
  return 0;
}