#include <iostream>
#include <cmath>
int main() {
  double a, b, c, d;
  std::cin >> a >> b >> c;
  d = b * b - 4 * a * c;
  if (a == 0 && b == 0) std::cout << "";
  else if (a == 0 && b != 0) std::cout << -c / b;
  else if (d >= 0) {
    if (d == 0) std::cout << -b / (2 * a);
    else std::cout<<(-b+sqrt(d))/(2*a)<<" "<<(-b-sqrt(d))/(2*a);
  } else{
    std::cout<<"";
  }
  return 0;
}