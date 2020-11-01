#include <iostream>
#include <vector>
#include <string>
const std::vector<int> DAY_IN_MONTH = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void Next(std::vector<std::vector<std::string>> &v, int &counter) {
  if (counter == 11) counter = 0;
  else ++counter;
  if (v.size() < DAY_IN_MONTH[counter]) { v.resize(DAY_IN_MONTH[counter]); }
  else if (v.size() > DAY_IN_MONTH[counter]) {
    for (int i = DAY_IN_MONTH[counter]; i < v.size(); ++i) {
      v[DAY_IN_MONTH[counter] - 1].insert(v[DAY_IN_MONTH[counter] - 1].end(), v[i].begin(), v[i].end());
    }
    while (v.size() > DAY_IN_MONTH[counter]) v.pop_back();
  }
}
void Add(std::vector<std::vector<std::string>> &v, const int &i_d, std::string &task) {
  v[i_d - 1].push_back(task);
}
void Dump(const std::vector<std::vector<std::string>> &v, const int &i_d) {
  std::cout << v[i_d - 1].size() << ' ';
  for (auto i : v[i_d - 1]) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}
int main() {
  int Q, currentMonth = 0;
  std::vector<std::vector<std::string>> mongthPlans(DAY_IN_MONTH[currentMonth]);
  std::cin >> Q;
  for (int i = 0; i < Q; ++i) {
    std::string command;
    std::cin >> command;
    if (command == "NEXT") Next(mongthPlans, currentMonth);
    else if (command == "ADD") {
      int index_day;
      std::string task;
      std::cin >> index_day >> task;
      Add(mongthPlans, index_day, task);
    } else if (command == "DUMP") {
      int index_day;
      std::cin >> index_day;
      Dump(mongthPlans, index_day);
    }
  }
  return 0;
}