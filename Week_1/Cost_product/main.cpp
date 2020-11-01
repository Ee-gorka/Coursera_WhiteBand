#include <iostream>

int main() {
  double N, A, B, X, Y;
  std::cin >> N >> A >> B >> X >> Y;
  if (N > A && N <= B) std::cout << N - X * N / 100;
  else if (N > B) std::cout << N - Y * N / 100;
  else std::cout << N;
  return 0;
}