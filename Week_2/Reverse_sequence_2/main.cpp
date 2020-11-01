#include <vector>
#include <algorithm>
std::vector<int> Reversed(const std::vector<int> &v) {
  std::vector<int> v2 = v;
  std::reverse(v2.begin(), v2.end());
  return v2;
}