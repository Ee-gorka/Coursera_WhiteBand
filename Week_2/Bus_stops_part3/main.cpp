#include <iostream>
#include <map>
#include <set>
int main() {
  std::map<std::set<std::string>, unsigned int> dict;
  int N;
  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    int n;
    std::set<std::string> stops;
    std::string stop;
    std::cin >> n;
    for (int j = 0; j < n; ++j) {
      std::cin >> stop;
      stops.insert(stop);
    }
    if (dict.count(stops) == 1) {
      std::cout << "Already exists for " << dict[stops] << '\n';
    } else {
      int number = dict.size() + 1;
      dict[stops] = number;
      std::cout << "New bus " << dict[stops] << '\n';
    }
  }
  return 0;
}