#include <iostream>
#include <vector>
#include <string>
int main() {
  std::vector<bool> queue;
  int q;
  std::cin >> q;
  for (int i = 0; i < q; ++i) {
    std::string command;
    int counterWorry = 0, number;
    std::cin >> command;
    if (command != "WORRY_COUNT") {
      std::cin >> number;
      if (command == "WORRY") queue[number] = true;
      else if (command == "QUIET") queue[number] = false;
      else queue.resize(queue.size() + number);
    } else {
      for (auto j :queue) {
        if (j == 1) ++counterWorry;
      }
      std::cout << counterWorry << std::endl;
    }

  }
  return 0;
}