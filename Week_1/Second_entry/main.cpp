#include <iostream>
#include <string>
int main() {
  std::string str;
  std::cin >> str;
  int counter = 0;
  for (int i = 0; i < str.length(); ++i) {
    if (str[i] == 'f') counter++;
    if (counter == 2) {
      std::cout << i;
      return 0;
    }
  }
  if (counter == 1) std::cout << -1;
  else std::cout << -2;
  return 0;
}