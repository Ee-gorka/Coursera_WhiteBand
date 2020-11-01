#include <iostream>
#include <fstream>
int main() {
  std::ifstream input("input.txt");
  std::ofstream output("output.txt");
  if (input) {
    std::string line;
    while (std::getline(input, line)) {
      output << line << '\n';
    }
  }
  return 0;
}