#include <iostream>
#include <vector>
#include <algorithm>
int main() {
  int N;
  std::vector<int> binaryForm;
  std::cin >> N;
  while (N > 0) {
    binaryForm.push_back(N % 2);
    N /= 2;
  }
  std::reverse(binaryForm.begin(), binaryForm.end());
  for (int i : binaryForm) {
    std::cout << i;
  }
  return 0;
}